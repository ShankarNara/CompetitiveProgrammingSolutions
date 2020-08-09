#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i;
	cin >> n >> k;
	vector<ll> a(n),w(k);

	for(i=0;i<n;i++) cin >> a[i];
	for(i=0;i<k;i++) cin >> w[i];

	sort(a.begin(),a.end(),greater<ll> ());
	sort(w.begin(),w.end());

	ll ans=0,j=0;
	for(i=0;i<k;i++) {
		ans+= a[i];
		w[i]-=1;
		if(w[i]==0) ans+= a[i];
	}
	j=i;

	for(i=0;i<k;i++){
		if(w[i]==0) continue;

		ll jmp = w[i]-1;
		j+= jmp;
		ans+= a[j];
		j++;
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