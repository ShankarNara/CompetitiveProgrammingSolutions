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
	string s;
	cin >> s;
	vector<ll> a;

	ll rem;
	for(i=0;i<n;i++){
		rem = s[i] - '0';
		if(rem%2) a.pb(rem);
	}

	if(a.size()<=1) cout << -1 << endl;
	else {
		ll lim=a.size();
		if(a.size()%2) lim--;
		for(i=0;i<lim;i++) cout << a[i];
		cout << endl; 
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
	ll T;
	cin >> T;
	while(T--) solve();	    
	return 0;
}