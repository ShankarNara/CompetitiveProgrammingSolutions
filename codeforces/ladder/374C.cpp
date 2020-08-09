#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;
ll cnt,mx;
string s[1002];
ll n,m;
map<ll,ll> col;
char dima[4] = {'D','I','M','A'};

ll indexOf(ll a,ll b){
	if (a<0 || b<0 || a>=n || b>=m) return -1;
	return a*m + b;
}

void dfs(ll ind,ll p=-1,ll f=0){
	if(f==4){
		cnt++;
	}
	

	ll x=ind/m;
	ll y = ind%m;

	if (s[x-1][y]==dima[f] && indexOf(x-1,y)!= -1 && col.find(indexOf(x-1,y)) == col.end()) {
		col[indexOf(x-1,y)]=1;
		f = (f+1)%4;
		dfs(indexOf(x-1,y),ind,f);
	}
	if (s[x+1][y]==dima[f] && indexOf(x+1,y)!= -1 && col.find(indexOf(x+1,y)) == col.end()) {
		col[indexOf(x+1,y)]=1;
		f = (f+1)%4;
		dfs(indexOf(x+1,y),ind,f);
	}
	ll cur = indexOf(x,y-1);
	if (s[x][y-1]==dima[f] && cur!= -1 && col.find(cur) == col.end()) {
		col[cur]=1;
		f = (f+1)%4;
		dfs(cur,ind,f);
	}
	cur = indexOf(x,y+1);
	if (s[x][y+1]==dima[f] && cur!= -1 && col.find(cur) == col.end()) {
		col[cur]=1;
		f = (f+1)%4;
		dfs(cur,ind,f);
	}
}

void solve(){
	ll i,j;
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> s[i];
	}

	mx=-1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]=='D'){
				cnt=0;
				col.clear();
				dfs(indexOf(i,j),-1,0);
				mx = max(mx,cnt);
			}
		}
	}

	cout << mx << endl;
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