#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll i,j,n;
	cin >> n;
	vector<ll> a(n);
	for(i=0;i<n;i++) cin >> a[i];

	sort(a.begin(), a.end());

	string ans="YES";
	for(i=1;i<n;i++){
		if(abs(a[i]-a[i-1])>1) ans="NO";
	}

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