#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i,j;
	cin >> n >> k;
	vector<ll> a(n),b(n);

	for(i=0;i<n;i++) cin >> a[i];
	for(i=0;i<n;i++) cin >> b[i];

	ll sum=0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end(),greater<ll> ());

	for(i=0;i<n;i++){
		if(i<k) sum+= max(a[i],b[i]);
		else sum+= a[i];
	}

	cout << sum << endl;
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