#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

ll all_ones(ll n){
	return (1LL << (n+1))-1;
}

void solve(){
	ll L,R,lon=0;
	cin >> L >> R;

	if(L==R) {
		cout << 0 << endl;
		return ;
	}
	ll i;
	for(i=0;L>0 || R>0;i++){
		if(L%2 != R%2) lon=i;
		L/=2;
		R/=2;
	}

	ll two = 2;
	ll ans = pow(two,lon+1)-1;
	cout << ans<<endl;
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
	while(T--){
		solve();
	}    
	return 0;
}