#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,m;
	cin >> n >> m;
	ll sum=0,a[n];
	for(i=0;i<n;i++) {
		cin >> a[i];
		sum+=a[i];
	}

	if(m<n || n==2) cout << -1 << endl;
	else {
		cout << sum*2<<endl;
		for(i=1;i<=n;i++){
			cout << i<<" ";
			if(i==n) cout << 1 <<endl;
			else cout << i+1<<endl;
		}
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
	ll T=1;
	cin >> T;
	while(T--) solve();    
	return 0;
}