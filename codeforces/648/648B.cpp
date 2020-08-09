#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll zeros=0,ones=0,n;
	cin >> n;
	bool isSorted=true;
	ll mx=0;
	for(ll i=0;i<n;i++){
		ll a;
		cin >> a;
		if(a<mx) isSorted=false;
		else mx = max(mx,a);
	}
	for(ll i=0;i<n;i++){
		ll a;
		cin >> a;
		if(a==1) ones++;
		else zeros++;	
	}

	string ans="No";
	if(isSorted) ans="Yes";
	if(zeros>0 && ones>0) ans="Yes";

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