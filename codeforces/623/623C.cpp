#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){

	ll n,i,j;
	cin >> n;
	vector<ll> b(n+1);
	set<ll> list;
	map<ll,ll> pr;
	for(i=2*n;i>=1;i--){
		list.insert(i);
	}

	for(i=0;i<n;i++){
		cin >> b[i];
		list.erase(b[i]);
	}
	// vector<ll> bc (b);
	// sort(bc.begin(),bc.end(),greater<ll>());
	
	// for(i=0;i<n;i++){
	// 	if (bc[i] < *--list.end()){
	// 		pr[bc[i]] = *--list.end();
	// 	} else {
	// 		cout << -1 << endl;
	// 		return ;
	// 	}
	// 	list.erase(*--list.end());
	// }

	for(i=0;i<n;i++){
		auto it = list.lower_bound(b[i]);
		if (it == list.end()) {
			cout << -1 << endl;
			return ;
		} 
		pr[b[i]] = *it;
		list.erase(*it);
	}

	for(i=0;i<n;i++){
		cout << b[i] << " "<<pr[b[i]]<<" ";
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

	cin >> T;

	while(T--){
		solve();
	}    
	return 0;
}