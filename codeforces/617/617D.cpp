#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,a,b,k,i,j;
	cin >> n >> a >> b >> k;
	vector<ll> h(n);

	for(i=0;i<n;i++){
		cin >> h[i];
		h[i]%= (a+b);
		if(h[i]==0) h[i]+= a+b;
		h[i] = (h[i] + a - 1)/a - 1;
	}
	sort(h.begin(),h.end());

	for(i=1;i<n;i++) h[i]+= h[i-1];
	for(i=0;i<n;i++) if(h[i]>k) break;

	cout << i << endl;
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
	while(T--) solve();    
	return 0;
}