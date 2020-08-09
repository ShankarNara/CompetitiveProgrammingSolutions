#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll a,b,x,y,w1,h1,w2,h2,i,j;
	cin >> a >> b >> x >> y;

	w1 = x;
	h1 = y;
	w2 = a - x - 1;
	h2 = b - y - 1;

	cout << max(max(w1*b,w2*b),max(h1*a,h2*a))<<endl;

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