#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;
char s[1001][1001];
ll dp[1001][1001];
bool isLoop;
vector<char> dima = {'D','I','M','A'};
vector<ll> dx={-1,0,1,0};
vector<ll> dy={0,-1,0,1};
ll n,m;

ll dfs(ll x,ll y,ll f){

	if(dp[x][y] == -2){
		isLoop = true;
		return 0;
	}
	if (dp[x][y] != -1){
		return dp[x][y];
	}

	dp[x][y]=-2;
	ll tar = dima[(f+1)%4];
	ll ans=1;
	for(ll d=0;d<4;d++){
		ll xc = x+dx[d],yc = y+dy[d];

		if (xc>=0 && xc<n && yc>=0 && yc<m && s[xc][yc]==tar){
			ll nxt = dfs(xc,yc,(f+1)%4);
			if(isLoop) return 0;
			ans=max(ans,nxt+1);
		}
	}

	dp[x][y]=ans;
	return ans;

}

void solve(){
	ll i,j;
	cin >> n >>> m;
	isLoop = false;

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> s[i][j];
			dp[i][j]=-1;
		}
	}

	ll ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='D' && dp[i][j]== -1){
				ll nxt = dfs(i,j,0);
				ans = max(ans,nxt/4);
			}
			if(isLoop) break;
		}
		if(isloop) break;
	}

	if(isLoop){
		cout << "Poor Inna!"<<endl;
	} else if (ans==0){
		cout << "Poor Dima!"<<endl;
	} else {
		cout << ans << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T=1;

	cin >> T;

	while(T--){
		solve();
	}    
	return 0;
}