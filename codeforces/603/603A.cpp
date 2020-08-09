#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll i,j,sum=0;
	vector<ll> a(3);

	for(i=0;i<3;i++) cin >> a[i];

	sort(a.begin(),a.end());
	if(a[2]>=a[0]+a[1]) {
		cout << a[0]+a[1]<<endl;
	} else {
		cout << (a[0]+a[1]+a[2])/2<<endl;
	}

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