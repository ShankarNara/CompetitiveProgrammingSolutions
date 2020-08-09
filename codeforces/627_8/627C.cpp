#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll i,j,mx,cur;
	string s;

	cin >> s;
	mx=0;
	cur=0;
	for(i=0;i<s.length();i++){
		if(s[i]=='L') cur++;
		else cur=0;
		mx = max(mx,cur);
	}

	cout << mx + 1 << endl;
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

	cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
}