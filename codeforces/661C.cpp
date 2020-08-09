#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j;
	cin >> n;
	vector<ll> cnt(n+1);

	for(i=0;i<n;i++){
		int a;
		cin >> a;
		cnt[a]++;
	}

	ll ans=0;
	for(ll s=2;s<=2*n;s++){
		ll cur=0;
		for(i=1;i<(s+1)/2;i++){
			if(s-i>n) continue;
			cur += min(cnt[i],cnt[s-i]);
		}
		if(s%2==0) cur+= cnt[s/2]/2;

		ans = max(ans,cur);
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