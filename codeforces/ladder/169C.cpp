#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i,j,sum=0;
	cin >> n >> k;
	vector<ll> a(n+1,0),pre(n+1,0);
	for(i=0;i<n;i++) cin >> a[i];
	for(j=0;j<k;j++){
		ll l,r;
		cin >> l >> r;
		pre[l-1]++;
		if(r!=n) pre[r]--;
	}
	for(i=1;i<n;i++){
		pre[i] = pre[i]+pre[i-1];
	}
	// for(i=0;i<n;i++) cout << a[i]<<" ";cout<<endl;
	// for(i=0;i<n;i++) cout << pre[i]<<" ";cout<<endl;
	sort(pre.begin(),pre.end(),greater<ll>());
	sort(a.begin(),a.end(),greater<ll>());

	for(i=0;i<n;i++){
		sum+= pre[i]*a[i];
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
	//cin >>T;
	while(T--){
		solve();
	}	    
	return 0;
}