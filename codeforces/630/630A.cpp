#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){

	ll a,b,c,d;
	ll x,y,x1,y1,x2,y2;
	cin >> a >> b >> c >> d;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	x = x + b - a;
	y = y + d - c;
	if((a + b>0 && x1 == x2) || (c + d>0 && y1==y2))
		cout << "No" << endl;
	else if((x1 <= x && x<= x2) && (y1 <= y && y <= y2))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
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