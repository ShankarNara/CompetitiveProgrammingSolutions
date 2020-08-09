#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 2e5+1;
using namespace std;
vector<ll> ans(maxn);
set<ll> adj[maxn];
bool vis[maxn];
void solve(){
	ll n,i,j;
	cin >> n;
	memset(vis,false,sizeof(vis));

	for(i=0;i<n-2;i++){
		ll a,b,c;
		cin >> a >> b >> c;
		adj[a].insert(b);
		adj[a].insert(c);
		adj[b].insert(a);
		adj[b].insert(c);
		adj[c].insert(a);
		adj[c].insert(b);
	}

	for(i=1;i<=n;i++){
		if(adj[i].size() == 2){
			ans[1]=i;
			vis[i]=true;
			break;
		}
	}

	for(i=1;i<=n;i++){
		if(vis[i]) continue;
		if(adj[i].size()==3 && adj[i].find(ans[1])!= adj[i].end()){
			ans[2] = i;
			vis[i]=true;
			break;
		}
	}

	for(i=3;i<=n;i++){
		ll alpha=ans[i-2];
		ll beta = ans[i-1];

		for(auto it: adj[alpha]){
			if(vis[it]) continue;
			if(adj[beta].find(it) != adj[beta].end()){
				ans[i]=it;
				vis[it]=true;
				break;
			}
		}
	}

	for(i=1;i<=n;i++) cout << ans[i]<<" ";
	cout << endl;
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