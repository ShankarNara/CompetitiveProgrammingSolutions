#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j;
	cin >> n;
	ll a[n+1];

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	sort(a,a+n);

	vector<ll> ans;
	for(i=0;i<n/2;i++){
		ans.pb(a[n-i-1]);
		ans.pb(a[i]);
	}

	if(n%2==1)
		ans.pb(a[i]);

	//printing out the answer

	for(i=ans.size()-1;i>=0;i--){
		cout << ans[i] << " ";
	} cout << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	 //Write your code here 
	 ll T;

	 cin >> T;

	 while(T--){
	 	solve();
	 }
	    
	return 0;
}