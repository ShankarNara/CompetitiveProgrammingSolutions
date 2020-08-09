#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

vector<ll> dp;
void solve(){
	string s;
	ll n,i,j;
	cin >> s;
	n = s.length();
	dp.assign(n+2,0);
	dp[0]=dp[1]=0;

	for(i=1;i<n;i++){
		
		if(s[i] != s[i-1]){
			dp[i+1] = max(1+dp[i-1],dp[i]);
		} else
			dp[i+1] = dp[i];
	}

	cout << dp[n]<<endl;
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