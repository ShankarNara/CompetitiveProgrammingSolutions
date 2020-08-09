#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,mx=1;

	cin >> n;
	vector<ll> a(n+2,1),pre(n+2,1),suf(n+2,1);
	for(i=1;i<=n;i++) cin >> a[i];

	for(i=2;i<=n;i++) 
		if(a[i]>a[i-1]){ 
			pre[i] = pre[i-1]+1;
			mx = max(mx,pre[i]);
		}
	for(i=n-1;i>=1;i--)
		if(a[i]<a[i+1]){
			suf[i]=suf[i+1]+1;
			mx = max(mx,suf[i]);
		}

	// for(auto it: pre) cout << it<<" ";
	// cout << endl;
	// for(auto it: suf) cout << it<<" ";
	// cout << endl;

	pre[0] = suf[n+1]=1;
	for(i=1;i<=n-1;i++){
		if(a[i]<a[i+2]) mx = max(mx,pre[i]+suf[i+2]);
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