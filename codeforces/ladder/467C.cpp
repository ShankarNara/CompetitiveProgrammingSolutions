#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 5e3+1;
using namespace std;

ll dp[maxn][maxn];
void solve(){
	ll i,j,n,m,k;
	cin >> n >> m >> k;
	vector<ll> a(n+1),p(n+1);

	for(i=1;i<=n;i++){
		cin >> a[i];
		p[i] = a[i]+p[i-1];
	}

	dp[m][1] = p[m];
	for(i=m;i<=n;i++){
		for(j=1;j<=k;j++){
			dp[i][j] = max(dp[i-1][j],p[i]-p[i-m] + dp[i-m][j-1]);
		}
	}

	cout << dp[n][k]<<endl;
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