#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
const ll maxn = 5e2+1;
using namespace std;

/*EXPLANATION :
	Our problem is to display the sum of shortest path from each u every other v (that is currently present)
	So , we reverse the order of removal of vertices . for every element of the order [maxn]
	in order , we consider this element and find the minimum of the distances from every u to v 
	considering a path through this element
	This way constructively we can find minimum of paths as mor elements ae being considered 
	(done using DP)
	for each iteration we add only the minimum distances of the vertices currently considered 
*/
void solve(){
	ll n,i,j;
	ll a[maxn][maxn];
	ll order[maxn];

	cin >> n;

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	for(i=0;i<n;i++){
		cin >> order[i];
	}
	vector<ll> ans;
	ans.clear();
	reverse(order,order+n);
	bool visited[maxn];
	memset(visited,false,sizeof(visited));
	for(ll k=0;k<n;k++){
		ll res=0;
		ll t= order[k];
		visited[t] = true;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				a[i][j] = min(a[i][j],a[i][t] + a[t][j]);
				if(visited[i] && visited[j]){
					res+= a[i][j];
				}
			}
		}

		ans.pb(res);
	}

	reverse(ans.begin(),ans.end());

	for(auto it: ans){
		cout << it << " ";
	} cout << endl;
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