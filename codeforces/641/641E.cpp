#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 1e4+1;
using namespace std;

ll a[maxn];

void solve(){
	ll i,j,n,ans=0;
	cin >> n;
	vector<ll> a(n);
	vector<ll> cnt(n+1);

	for(i=0;i<n;i++){
		cin >> a[i];
		cnt[a[i]]++;
	}

	for(i=0;i<n;i++){
		ll sum=0;
		for(j=i;j<n;j++){
			sum+= a[j];
			if(j!=i && sum<=n){
				ans+= cnt[sum];
				cnt[sum]=0;
			}
		}
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