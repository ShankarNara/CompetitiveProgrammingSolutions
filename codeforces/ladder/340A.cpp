#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i;
	cin >> n;
	vector<ll> a(n+1),lis;
	for(i=0;i<n;i++) cin >> a[i];

	for(i=0;i<n;i++){
		auto it = lower_bound(lis.begin(),lis.end(),a[i]);
		if(it == lis.end()) lis.pb(a[i]);
		else *it = a[i];
	}
	cout << lis.size()<<endl;
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

	//cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
}