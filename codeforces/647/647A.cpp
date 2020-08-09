#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

ll getMin(ll n){
	ll cnt=0;
	while(true){
		if(n%8==0) n/=8; 
		else if(n%4==0) n/=4;
		else if(n%2==0) n/=2;
		else{
			if(n==1) return cnt;
			else return -1;
		}
		cnt++;
	}
	return 0;
}

void solve(){
	ll a,b;
	cin>> a >> b;
	if(a<b) swap(a,b);

	ll ans=-1;
	if(a%b==0) ans = getMin(a/b);	

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