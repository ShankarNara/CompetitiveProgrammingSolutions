#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll R,C;
	cin >> C >> R;

	ll remc = C%9;
	ll digc = C/9;
	if(remc) digc++;

	ll remr = R%9;
	ll digr = R/9;
	if(remr) digr++;

	if(digc<digr) cout << 0 << " "<<digc<<endl;
	else cout << 1 << " " << digr << endl;
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