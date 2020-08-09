#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 998244353
const ll maxn = 2e5+10;
using namespace std;

ll power(ll a,ll b){
	ll res=1;
	a=a%mod;

	while(b>0){
		if(b%2) res=(res*a)%mod;
		a = (a*a)%mod;
		b/=2;
	}

	return res;
}

ll modInv(ll a){
	return power(a,mod-2);
}

void solve(){
	ll n,m,i,j;
	cin >> n >> m;
	ll fact[maxn];
	fact[0]=1;
	for(i=1;i<=m;i++){
		fact[i] = (i*fact[i-1])%mod;
	}

	ll num = fact[m];
	ll den = (fact[n-1]*fact[m-n+1])%mod;
	ll res = (num*modInv(den))%mod;

	res = (res*(n-2))%mod;
	res = (res*power(2,n-3))%mod;

	cout << res << endl;
}

int main(){

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