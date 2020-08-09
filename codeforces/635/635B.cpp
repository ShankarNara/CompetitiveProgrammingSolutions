#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,m,x,i,j;
	ll prev,cur;

	cin >> x >> n >> m;

	prev = x;
	for(i=0;i<n;i++){
		cur = (prev/2) + 10;

		if(cur > prev) break;

		prev = cur;
	}

	if(prev - 10*m <= 0) cout << "YES" << endl;
	else cout << "NO" << endl; 
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	 //My code goes here 
	 ll T;

	 cin >> T;

	 while(T--){
	 	solve();
	 }
	    
	return 0;
}