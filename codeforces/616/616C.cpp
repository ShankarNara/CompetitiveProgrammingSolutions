#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,m,k,i,j,ans=0;
	cin >> n >> m >> k;
	k = min(k,m-1);
	ll jump = n-m;

	vector<ll> a(n+1,0);
	for(i=0;i<n;i++) cin >> a[i];

	for(i=0;i<=k;i++){
		ll s = 1e9+1;
		for(j=0;j<=m-1-k;j++){
			ll t = max(a[i+j],a[i+j+jump]);
			s = min(s,t);
		}
		ans = max(ans,s);
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
	ll T;
	cin >> T;
	while(T--) solve();	    
	return 0;
}