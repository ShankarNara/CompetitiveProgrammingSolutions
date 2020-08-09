#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n;
	cin >> n;
	ll ans=0;
	ans+= pow(2,n);
	ll cnt=n/2;
	for(ll i=n-1;i>=1;i--){
		if (ans-pow(2,i)>=0 && cnt>0) {ans-= pow(2,i); cnt--;}
		else ans+= pow(2,i);
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
	ll T;
	cin >> T;
	while(T--){
		solve();
	}	    
	return 0;
}