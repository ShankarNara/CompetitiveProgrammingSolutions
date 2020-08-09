#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define x first                 
#define y second
const ll maxn = 2e6+1;
const ll mod = 1e9+7;

using namespace std;
ll n,a,b;
ll fact[maxn];

ll power(ll x,ll y){
	ll res=1;
	x=x%mod;
	if (x==0) return 0;

	while(y>0){

		if(y&1) res = (res*x)%mod;
		y=y>>1;
		x=(x*x)%mod;
	}

	return res;
}

void init_fact(ll n){
	fact[0]=1;
	for(ll i=1;i<=n;i++){
		fact[i]=(fact[i-1]*i)%mod;
	}
}

bool check(ll val,ll a,ll b){

	while(val > 0){
		if(val%10==a || val%10==b) {
			val/=10;
		} else return false;
	}

	return true;
}

ll getComb(ll i){
	ll num = fact[n]%mod;
	ll den = (fact[n-i]*fact[i])%mod;
	ll ans = num*power(den,mod-2)%mod;

	return ans;
}

void solve(){
	//cout << power(2,10);
	ll i,j;
	cin >> a >> b >> n;
	init_fact(n);
	ll ans=0;

	for(i=0;i<=n;i++){
		ll sum = a*i + b*(n-i);

		if(check(sum,a,b)){
			ll cur = getComb(i);
			ans=(ans+cur)%mod;
			//cout << "cur = "<<i<<endl;
		}
	}

	cout << ans <<endl;
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