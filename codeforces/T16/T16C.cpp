#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

set<pair<pair<ll,ll> ,pair<ll,ll > > > loc;
void solve(){
	ll n,i;
	pair<ll,ll> cur(0,0);
	string s;

	loc.clear();
	cin >> s;
	n=s.length();
	ll ans=0;
	ll a,b;
	for(i=0;i<n;i++){
		char ch = s[i];
		a=cur.x; b=cur.y;
		if(ch=='N') b++;
		else if(ch=='S') b--;
		else if(ch=='E') a++;
		else a--;

		pair<ll,ll> p (a,b);
		if(!loc.count(pair<pair<ll,ll> ,pair<ll,ll > > (p,cur))) {
			ans+=5;
			loc.insert(pair<pair<ll,ll> ,pair<ll,ll > > (cur,p));
			loc.insert(pair<pair<ll,ll> ,pair<ll,ll > > (p,cur));
		} else ans+=1;
		cur = p;
	}

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