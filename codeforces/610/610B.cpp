#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,p,k,i,j;
	cin >> n >> p >> k;
	vector<ll> a(n);
	for(i=0;i<n;i++) cin >> a[i];

	ll pref=0,ans=0;
	sort(a.begin(),a.end());
	for(i=0;i<k;i++){
		ll sum=pref;
		if(sum>p) break;
		ll cnt=i;
		for(j=i+k-1;j<n;j+=k){
			if(sum+a[j] > p) break;
			sum+= a[j];
			cnt+=k;
		}

		pref+= a[i];
		ans=max(ans,cnt);
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