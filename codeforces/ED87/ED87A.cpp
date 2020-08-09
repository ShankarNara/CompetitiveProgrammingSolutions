#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll a,b,c,d;
	cin >> a >> b >> c >> d;
	ll hrs = a-b;
	ll ans=-1;
	if(hrs>0){
		ll jump = c-d;
		if(jump>0){
			//cout << b << " "<<ceil((float)(a-b)/(float)jump)<<endl;
			//ans = b+ ceil((float)(a-b)/(float)jump)*c;
			ll t= hrs/jump;
			if(hrs%jump) t++;
			ans = b + t*c;
		}
	} else ans=b;

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