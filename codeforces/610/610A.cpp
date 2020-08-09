#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll a,b,c,r;
	cin >> a >> b >> c >> r;
	if(a>b) swap(a,b);
	ll left=c-r;
	ll right=c+r;
	ll mx = b-a;

	if(left>b || right < a) {
		cout << mx << endl;
		return;
	}
	ll t = min(b,right) - max(a,left);
	cout << mx-t<<endl;;
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
	while(T--) solve();    
	return 0;
}