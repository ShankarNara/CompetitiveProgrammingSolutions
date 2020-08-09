#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,mina,minb;
	cin >> n;
	vector<ll> a(n), b(n);
	mina = minb = 1e9+1;

	for(i=0;i<n;i++) {
		cin >> a[i];
		mina = min(mina, a[i]);
	}

	for(i=0;i<n;i++){
		cin >> b[i];
		minb = min(minb,b[i]);
	}

	ll ans=0;
	for(i=0;i<n;i++){
		ll diffa = a[i]-mina, diffb = b[i]-minb;
		ans+= min(diffa,diffb)+abs(diffa-diffb);
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