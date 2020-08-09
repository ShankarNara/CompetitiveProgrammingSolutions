#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i;
	cin >> n;
	vector<ll> s(n);
	for(i=0;i<n;i++) cin >> s[i];

	sort(s.begin(),s.end());
	ll diff=1001;

	for(i=1;i<n;i++){
		diff = min(s[i] - s[i-1],diff);
	}

	cout << diff << endl;
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