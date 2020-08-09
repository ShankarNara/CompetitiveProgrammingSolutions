#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

ll get_count(ll diff,ll l,ll r,ll h){
	if(diff%h>=l && diff%h <= r) return 1;
	return 0;
}

void solve(){
	ll n,h,l,r,i,j,sum;
	cin>> n >> h >> l >> r;
	vector<ll> a(n);
	vector<vector<ll> > dp(n+1,vector<ll> (n+1,-oo));

	for(i=0;i<n;i++){
		cin >> a[i];
	}
	sum=0;
	dp[0][0]=0;

	for(i=0;i<n;i++){
		sum+=a[i];
		//dp[i+1][0] = dp[i][0] + get_count(sum,l,r); 
		for(j=0;j<=i;j++){
			dp[i+1][j] = max(dp[i+1][j],dp[i][j] + get_count(sum-j,l,r,h));
			dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j] + get_count(sum-j-1,l,r,h));
		}
	}

	ll mx = 0;
	for(i=0;i<=n;i++){
		mx = max(mx,dp[n][i]);
	}

	cout << mx << endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	 //My code goes here 
	ll T=1;
	
	//cin >> T;

	while(T--){
		solve();
	}    
	    
	return 0;
}