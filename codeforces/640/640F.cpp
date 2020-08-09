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
	cin >> n;
	vector<ll> ans;

	if(n<4) {
		cout << -1 << endl;
		return ;
	}
	if(n%2) i=n;
	else i=n-1;

	for(;i>=1;i-=2) ans.pb(i);
	ans.pb(4); ans.pb(2);
	for(i=6;i<=n;i+=2) ans.pb(i);

	for(auto it: ans) cout << it << " ";
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