#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 2e5+1;
using namespace std;
ll dp[maxn][2];
vector<ll> a;
ll N;

ll dfs(ll i,ll op){

	ll x;
	if(i==1) return -2;
	if (i<=0 || i>N) return 0;
	if (dp[i][op]!= -1) return dp[i][op];
	dp[i][op] = -2;

	if (op==0) x = dfs(i-a[i],1);
	else x = dfs(i+a[i],0);

	if (x==-2) dp[i][op]=x;
	else dp[i][op] = a[i] + x;

	return dp[i][op];
}

void solve(){
	ll i,j;
	cin >> N;
	a.resize(N+1);
	for(i=2;i<=N;i++){
		cin >> a[i];
		dp[i][0] = dp[i][1] = -1;
	}

	for(i=1;i<=N-1;i++){
		ll x = dfs(i+1,0);
		if(x==-2) cout << -1 << endl;
		else cout << i+x <<endl;
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
	//cin >> T;

	while(T--){
		solve();
	}	    
	return 0;
}