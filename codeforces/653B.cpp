#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

ll n;

ll getFactor(ll N,ll k){
	ll cnt=0;
	while(N%k==0) {
		N/=k;
		cnt++;
	}

	return cnt;
}

void solve(){
	ll f3,f2;

	cin >> n;
	ll ans=0;

	f3=0; f2=0;
	while(n%3==0) {
		n/=3;
		f3++;
	}

	while(n%2==0){
		n/=2;
		f2++;
	}

	if(n==1 && f3 >= f2){
		ans = 2*f3 - f2;
	} else {
		ans=-1;
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