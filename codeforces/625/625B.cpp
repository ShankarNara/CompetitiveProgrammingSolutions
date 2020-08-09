#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j;
	cin >> n;
	vector<ll> b(n+1),dif(n+1);
	map<ll,ll> fr;
	fr.clear();

	for(i=0;i<n;i++){
		cin >> b[i];
		dif[i] = b[i] - (i+1);
	}

	for(i=0;i<n;i++){
		if(fr.find(dif[i]) == fr.end()){
			fr[dif[i]]= b[i];  
		} else {
			fr[dif[i]]+= b[i];
		}
	}

	ll mx=0;
	for(auto it: fr){
		mx = max(mx,it.second);
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