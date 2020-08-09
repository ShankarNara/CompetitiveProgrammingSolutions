#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,u,v,i,j;
	cin >> n;
	vector<ll> a;
	
	for(i=0;i<n;i++){
		cin >> u;
		a.pb(u);
	} 
	for(i=0;i<n;i++){
		cin >> v;
		a[i]-= v;
	}

	sort(a.begin(),a.end());

	ll ans=0;
	for(i=0;i<n;i++){
		//cout <<"ans = "<< ans << endl;
		if(a[i] > 0){
			ll pos = lower_bound(a.begin(),a.end(),-a[i]+1) - a.begin();
			ans+= i - pos;	
		} 
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

	while(T--){
		solve();
	}	    
	return 0;
}