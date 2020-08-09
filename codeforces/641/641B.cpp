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
	ll a[n+1],f[n+1];
	for(i=1;i<=n;i++){
		cin >> a[i];
		f[i]=1;
	}

	for(i=1;i<=n;i++){
		for(j=i*2;j<=n;j+=i){
			if(a[i]<a[j])
				f[j] = max(f[j],f[i]+1);
		}
	}

	ll mx=0;
	for(i=1;i<=n;i++) mx = max(mx,f[i]);

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