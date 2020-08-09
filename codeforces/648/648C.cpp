#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll mx=0,n,i,j;
	map<ll,ll> amap,bmap;
	cin >> n;

	for(i=0;i<n;i++) {
		ll a;
		cin >> a;
		amap[a]=i;
	}

	for(i=0;i<n;i++) {
		ll a;
		cin >> a;
		bmap[a]=i;
	}

	map<ll,ll> ind;
	for(i=1;i<=n;i++){
		ll ai = amap[i];
		ll bi = bmap[i];
		ll diff = ai - bi;
		ind[(diff%n+n)%n]++;
	}

	for(i=0;i<n;i++){
		//cout << ind[i]<<endl;
		mx = max(ind[i],mx);
	}

	cout << mx << endl;
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