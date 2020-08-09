#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i,j,l,r,cnt;
	cin >> n >> k;
	ll a[n+1],prefix[n+1];
	memset(prefix,0,sizeof(prefix));
	for(i=0;i<n;i++) cin >> a[i];
	vector<ll> peaks;
	cnt=0;

	for(i=1;i<n-1;i++){
		if (a[i]>a[i-1] && a[i]>a[i+1]){
			peaks.pb(i);
			prefix[i]=1;
			cnt++;
		}
	}
	// for(i=0;i<peaks.size();i++) cout << peaks[i]<<" ";
	// 	cout << endl;
	for(i=1;i<n;i++){
		prefix[i] += prefix[i-1];
	}
	// for(i=0;i<n;i++) cout << prefix[i]<<" ";
	// 	cout << endl;
	ll mx = 0;
	l = 1;
	for(i=0;i<n-k+1;i++){
		ll cur = prefix[i+k-2] - prefix[i];
		if (mx < cur){
			mx = cur;
			l=i+1;
		}
	}

	cout << mx+1 << " "<<l<<endl;
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


	while(T--){
		solve();
	}    
	return 0;
}