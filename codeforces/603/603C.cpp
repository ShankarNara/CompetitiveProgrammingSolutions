#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,s;
	set<ll> xval;
	cin >> n;

	for(i=0;i*i<=n;i++){
		xval.insert(i);
		if(i!=0) xval.insert(n/i);
	}

	cout << xval.size()<<endl;
	for(auto it:xval) cout << it << " ";
	cout << endl;
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