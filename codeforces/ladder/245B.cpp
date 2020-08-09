#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,m,i,j,mx;
	cin >> n >> m;
	ll a[n+1][m+1];
	// ll dp11[n+2][m+2],dp1m[n+2][m+2],dpn1[n+2][m+2],dpnm[n+2][m+2];
	// memset(dp11,0,sizeof(dp11));memset(dp1m,0,sizeof(dp1m));memset(dpn1,0,sizeof(dpn1));memset(dpnm,0,sizeof(dpnm));
	vector<vector<ll> > dp1(n+2,vector<ll> (m+2,0));
	vector<vector<ll> > dp2(n+2,vector<ll> (m+2,0));
	vector<vector<ll> > dp3(n+2,vector<ll> (m+2,0));
	vector<vector<ll> > dp4(n+2,vector<ll> (m+2,0));
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}

	// Precalculating DP values
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			dp1[i][j] = a[i][j] + max(dp1[i-1][j],dp1[i][j-1]);
		}
	}

	for(i=n;i>=1;i--){
		for(j=m;j>=1;j--){
			dp2[i][j] = a[i][j] + max(dp2[i+1][j],dp2[i][j+1]);
		}
	}

	for(i=n;i>=1;i--){
		for(j=1;j<=m;j++){
			dp3[i][j] = a[i][j] + max(dp3[i+1][j],dp3[i][j-1]);
		}
	}
	for(i=1;i<=n;i++){
		for(j=m;j>=1;j--){
			dp4[i][j] = a[i][j] + max(dp4[i-1][j],dp4[i][j+1]);
		}
	}

	

	mx=0;
	for(i=2;i<n;i++){
		for(j=2;j<m;j++){
			mx = max(dp1[i][j-1] + dp2[i][j+1] + dp3[i+1][j] + dp4[i-1][j],
					dp1[i-1][j] + dp2[i+1][j] + dp3[i][j-1] + dp4[i][j+1]
				);
		}
	}

	cout << mx << endl;
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

//	cin >> T;

	while(T--){
		solve();
	}    
	return 0;
}