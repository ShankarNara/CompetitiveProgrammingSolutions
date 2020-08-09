#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,k,i,j;
	cin >> n >> k;
	ll prefix[2*k+1],cnt[2*k+1],a[n+1];
	memset(prefix,0,sizeof(prefix));
	memset(cnt,0,sizeof(cnt));


	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n/2;i++){
		ll t = a[i]+a[n-i-1];
		cnt[t]++;

		ll l = min(a[i],a[n-i-1])+1;
		ll r = max(a[i],a[n-i-1])+k;
		prefix[l]++;
		prefix[r+1]--;
	}

	for(i=2;i<2*k;i++){
		prefix[i+1]+= prefix[i];
	}

	ll ans=n+1;
	for(ll x = 2;x<=2*k;x++){
		ans = min(prefix[x]-cnt[x] + 2*((n/2) - prefix[x]),ans);
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

	while(T--){
		solve();
	}
	    
	return 0;
}