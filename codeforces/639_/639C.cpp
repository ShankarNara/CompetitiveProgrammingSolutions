#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j;
	cin >> n;
	ll a;
	set<ll> pack;
	for(i=0;i<n;i++) {
		cin >> a;
		ll t = (a+i)%n;
		if(t<0) t+= n;
		pack.insert(t);
	}

	ll nset = pack.size();
	if(nset<n) cout << "NO"<<endl;
	else cout << "YES"<<endl;
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