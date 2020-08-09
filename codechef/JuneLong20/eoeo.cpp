#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

ll getFact(ll ts){
	ll p=1;
	while(ts%2==0){
		p*=2;
		ts/=2;
	}

	return p;
}

void solve(){
	ll ts,f;

	cin >> ts;
	f = getFact(ts);

	ll ans = ts/(2*f);

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