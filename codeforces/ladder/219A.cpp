#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,cnt=0;
	cin >> n;
	vector<ll> a(n,0);
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	sort(a.begin(),a.end());
	ll pt=n/2;
	ll ans=n;
	for(i=0;i<n/2;i++){
		while(true){
			if(a[i]*2 <= a[pt]){
				ans--;
				pt++;
				break;
			} else pt++;

			if(pt==n) break;
		}
		if(pt==n) break;
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
	//cin >>T;
	while(T--){
		solve();
	}
	return 0;
}