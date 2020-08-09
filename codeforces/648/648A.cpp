#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	set<ll> rows,cols;
	ll n,m,a,i,j;
	cin >> n >> m;
	for(i=0;i<n;i++) rows.insert(i);
	for(i=0;i<m;i++) cols.insert(i);

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> a;
			if(a==0) continue;
			rows.erase(i);
			cols.erase(j);
		}
	}

	ll cnt = min(rows.size(),cols.size());

	if(cnt%2) cout << "Ashish" << endl;
	else cout << "Vivek" << endl;
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