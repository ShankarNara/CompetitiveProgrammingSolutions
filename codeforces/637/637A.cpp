#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,a,c,b,d;
	ll l,r,lm,rm;
	cin >> n >> a >> b >> c >> d;
	string ans = "Yes";

	l = (a-b)*n;
	r = (a+b)*n;
	lm = c-d;
	rm = c+d;

	if(r<lm || l>rm){
		ans="No";
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

	cin >>T ;

	while(T--){
		solve();
	}

	return 0;
}