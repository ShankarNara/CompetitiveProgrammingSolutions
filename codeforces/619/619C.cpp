#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,m,i,j,z,div,rem;
	cin >> n >> m;
	z = n-m;
	div = z/(m+1);
	rem = z%(m+1);

	ll sub1 = (m+1-rem)*(div*(div+1))/2;
	ll sub2 = (rem)*(div+1)*(div+2)/2;
	ll ans = (n*(n+1))/2 -  sub1 - sub2;

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