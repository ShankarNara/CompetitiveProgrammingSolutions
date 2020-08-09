#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

vector<ll> pre,suf;

ll gcd(ll x,ll y){
	if(y==0) return x;
	else return gcd(y,x%y);
}

void solve(){
	ll n,i,j;
	cin >> n;
	ll a[n+2];
	pre.resize(n+2,1);
	suf.resize(n+2,1);

	for(i=1;i<=n;i++) cin >> a[i];
	pre[1]=a[1]; suf[n]=a[n];
	for(i=2;i<=n;i++) pre[i] = gcd(pre[i-1],a[i]);
	for(i=n-1;i>=1;i--) suf[i] = gcd(suf[i+1],a[i]);

	ll ans;
	for(i=1;i<=n;i++){
		if(i==1) ans = suf[2];
		else if(i==n) ans = ans*pre[n-1]/gcd(ans,pre[n-1]);
		else {
			ll t = gcd(pre[i-1],suf[i+1]);
			ans = ans*t/gcd(ans,t);
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
	while(T--) solve(); 	    
	return 0;
}