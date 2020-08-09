#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

ll primes[] = {2,3,5,7,11,13,17,19,23,29,31,37};
ll getPrime(ll a){
	ll i;
	for(i=2;i<a;i++){
		if(a%i==0)
			return i;
	}

	return -1;
}

ll indexOf(ll n){

	ll i;
	for(i=0;i<11;i++){
		if(primes[i] == n)
			return i;
	}

	return -1;
}

void solve(){
	ll n,i,j,m;
	cin >> n;
	ll a[n+1],ans[n+1];
	vector<bool> used(12,false);
	vector<ll> num;
	for(i=0;i<n;i++){
		cin >> a[i];
		ll x = indexOf(getPrime(a[i]));
		used[x] = true;
	}

	ll cnt=0;
	for(i=0;i<11;i++){
		num.pb(cnt);
		if(used[i])
			cnt++;
	}

	cout << cnt << endl;
	for(i=0;i<n;i++){
		ll x = indexOf(getPrime(a[i]));
		cout << num[x]+1 << " ";
	} cout << endl;


}

int main(){

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