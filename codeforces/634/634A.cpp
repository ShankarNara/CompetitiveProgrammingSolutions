#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,ans;
	cin >> n;

	if(n<=2) ans = 0;
	else if (n%2==0) ans = (n/2) - 1;
	else ans = n/2;

	cout << ans << endl;
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