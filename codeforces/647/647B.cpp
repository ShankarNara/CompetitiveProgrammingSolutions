#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
vector<ll> a;
set<ll> s,t;

ll getMaxLimit(ll m){
	ll p=1;

	while(p<=m){
		p*=2;
	}

	return p;
}

void solve(){
	ll n,i,j;
	cin >> n;
	a.resize(n);
	s.clear();t.clear();
	ll mx=0;
	for(i=0;i<n;i++) {
		cin >> a[i];
		s.insert(a[i]);
		mx = max(mx,a[i]);
	}

	ll l = getMaxLimit(mx);

	ll ans=-1;
	for(i=1;i<=l;i++){
		for(j=0;j<n;j++){
			ll tmp = a[j]^i;
			if(s.count(tmp) != 0) t.insert(tmp);
			else continue;
		}

		if(t==s) {
			ans=i;
			break;
		}
		t.clear();
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