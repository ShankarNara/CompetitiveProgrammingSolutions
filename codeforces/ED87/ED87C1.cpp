#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	float n,ang;
	cin >> n;
	n = 2*n;
	ang = (n-2.0)*180.0/n;
	ang = 180.0-ang;
	float ang1 = 45.0 - ang;

	float s1 = cos(ang1);
	s1= s1*2.0;
	float sub = s1/sqrt(2);

	cout << 2*sub + 1.0<<endl;


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