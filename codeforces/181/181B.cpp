#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
vector<ll> adj[50],cur;
vector<vector<ll> > c[50];
vector<bool> vis;

void dfs(ll u,ll p){
	vis[u]=true;
	cur.pb(u);
	for(auto it: adj[u]){
		if(it!= p){
			dfs(it,u);
		}
	}
}

void solve(){
	vector<vector<ll> > ans;
	ll n,i,j,m;
	cin >> n >> m;
	vis.resize(n+1,false);
	//adj.clear(); c.clear();
	for(i=0;i<m;i++){
		ll a,b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}

	cur.clear();
	for(i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i,-1);
			c[cur.size()].pb(cur);
			cur.clear();
		}
	}

	for(i=4;i<50;i++){
		if(c[i].size() != 0){
			cout << -1 << endl;
			return ;
		}
	}

	if((c[1].size() - c[2].size())%3 != 0){
		cout << -1 << endl;
		return ;
	}
	if(c[2].size() < c[1].size()){
		cout << -1 << endl;
		return ;
	}
	// creating ans vector
	for(auto it: c[3]){
		ans.pb(it);
	}

	for(i=0;i<c[2].size();i++){
		cur.clear();
		cur.pb(c[2][i][0]);
		cur.pb(c[2][i][1]);
		cur.pb(c[1][i][0]);
		ans.pb(cur);
	}

	for(j=i;j<c[1].size();j+=3){
		cur.clear();
		for(ll k=0;k<3;k++){
			cur.pb(c[1][j+k][0]);
		}
		ans.pb(cur);
	}

	// Displaying ans vector

	for(i=0;i<ans.size();i++){
		for(j=0;j<3;j++){
			cout << ans[i][j] <<" ";
		}
		cout << endl;
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