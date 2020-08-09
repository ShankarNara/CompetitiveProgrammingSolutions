#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,d;
	cin >> n >> d;
	ll min_point = sqrt(d)-1;
	string ans="NO";
	ll x1 = floor(sqrt(d)-1), x2 = ceil(sqrt(d)-1);
	if(ceil(x1 + (d/(x1+1))) <= n) ans="YES";
	else if (ceil(x2 + (d/(x2+1))) <= n) ans="YES";

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