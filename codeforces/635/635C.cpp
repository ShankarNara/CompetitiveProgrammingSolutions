#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
const ll maxn = 2e5+1;
using namespace std;

ll depth[maxn],sum[maxn];
vector<ll> adj[maxn];

void dfs(ll s,ll p){
	sum[s]=1;
	ll nodes = 0;

	for(auto it: adj[s]){
		if(it != p){
			depth[it] = depth[s]+1;
			dfs(it,s);
			sum[s]+= sum[it];
			nodes+= sum[it];
		}
	}

	depth[s]-= nodes;
}

void solve(){
	ll i,j,n,k,u,v;

	cin >> n >> k;

	for(i=0;i<n-1;i++){
		cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	depth[1]=0;
	dfs(1,1);

	sort(depth+1,depth+n+1,greater<ll> ());

	ll ans=0;
	for(i=1;i<=k;i++){
		ans+= depth[i];
	}

	cout << ans << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T=1;

	//cin >> T;

	while(T--;){
		solve();
	}

	    
	return 0;
}