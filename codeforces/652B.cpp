#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i;
	string s,ans="";

	cin >> n;
	cin >> s;

	for(i=0;i<n;i++){
		if(s[i]=='0') ans+='0';
		else break;
	}

	string ones="";
	bool isZero = false;
	for(;i<n;i++){
		if(s[i]=='1') ones+='1';
		else {
			ones="";
			isZero=true; 
		}
	}

	if(isZero) ans+= '0';
	ans+= ones;

	cout << ans << endl;
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