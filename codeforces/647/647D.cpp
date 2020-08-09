#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const int N = 1e6+7;
using namespace std;

vector<bool> top;
vector<int> adj[N];
vector<pair<int,int> > blogn;
vector<int> border;

void solve(){
	int i,j,n,m,a,b;
	for(i=0;i<N;i++) adj[i].clear();
	blogn.clear();
	border.resize(n+1,0);
	top.resize(n+1,false);
	
	cin >> n >> m;

	for(i=0;i<m;i++){
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}

	for(i=0;i<n;i++) {
		cin >> a;
		border[i+1]=a;
		blogn.pb(make_pair(a,i+1));
	}

	sort(blogn.begin(),blogn.end());

	// for(i=0;i<blogn.size();i++){
	// 	cout << blogn[i].x << " " << blogn[i].y << endl;
	// }

	bool ans=true;

	for(auto it: blogn){
		int cur = it.y;
		top[cur] = true;
		for(auto ij: adj[cur]){
			if(top[ij] && border[ij]>=it.x){
				ans=false;
				cout << -1 << endl;
				return ;
			} 
		}
	}

	if(ans)
		for(auto it: blogn) cout << it.y << " ";
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