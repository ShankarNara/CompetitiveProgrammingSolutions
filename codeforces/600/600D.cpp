#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 2e5+100;
using namespace std;

vector<ll> adj[maxn];
vector<bool> vis;
vector<pair<ll,ll> > rang;
ll lrange,rrange;

void dfs(ll i,ll &lrange,ll &rrange){
	vis[i] = true;
	lrange = min(i,lrange);
	rrange = max(i,rrange);

	for(auto it: adj[i]){
		if(!vis[it]){
			dfs(it,lrange,rrange);
		}
	}
}

void solve(){
	ll N,M,u,v,i,j;
	cin >> N >> M;
	vis.resize(N+2,false);

	for(i=0;i<M;i++){
		cin >> u >> v;
		u--;v--;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	for(i=0;i<N;i++){
		if(!vis[i]){
			lrange=i;
			rrange=i;
			dfs(i,lrange,rrange);
			//cout << "l = "<<lrange<<"r = "<<rrange<<endl;
			rang.pb(pair<ll,ll> (lrange,rrange));
		}
	}

	ll ans=0,cur=-1;
	for(auto it: rang){
		//cout << "x = "<<it.x<<"y = "<<it.y<<endl;
		if(it.x <= cur){
			ans++;
		}
		cur = max(cur,it.y);
	}

	cout << ans << endl;
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
	while(T--) solve();	    
	return 0;
}