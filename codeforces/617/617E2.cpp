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
	string s;
	cin >>n >> s;
	vector<ll> dp(n,1);
	vector<ll> maxdp(26,0);

	for(i=0;i<n;i++){
		for(ll ch=25;ch>s[i]-'a';ch--){
			dp[i] = max(maxdp[ch]+1,dp[i]);
		}
		maxdp[s[i]-'a'] = max(maxdp[s[i]-'a'],dp[i]);
	}

	cout << *max_element(maxdp.begin(),maxdp.end()) << endl;
	for(i=0;i<n;i++) cout << dp[i] << " ";
	cout << endl;
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
	//cin >> T;
	while(T--) solve();    
	return 0;
}