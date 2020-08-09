#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	vector<ll> a(3);
	for(ll i=0;i<3;i++) cin >> a[i];
	sort(a.begin(),a.end());
	ll mn=2*oo;
	for(ll i=a[0]-1;i<a[0]+2;i++){
		for(ll j=a[1]-1;j<a[1]+2;j++){
			for(ll k=a[2]-1;k<a[2]+2;k++){
				//cout << "val = "<<abs(i-j) + abs(j-k) + abs(k-i) << endl;
				mn=min(mn,abs(i-j) + abs(j-k) + abs(k-i));
			}
		}
	}
	cout << mn << endl; 
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