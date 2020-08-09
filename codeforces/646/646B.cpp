#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,tot0,tot1;
	string s;
	cin >> s;
	n = s.length();
	vector<ll> pre0(n+1),pre1(n+1);
	for(i=0;i<n;i++){
		if(i==0){
			if(s[i]=='1') pre1[0]++;
			else pre0[0]++;
			continue;
		}

		pre1[i] = pre1[i-1];
		pre0[i] = pre0[i-1];
		if(s[i]=='1')pre1[i]++;
		else pre0[i]++;
	}

	// for(i=0;i<n;i++) cout << pre0[i] << " ";
	// cout << endl;
	// for(i=0;i<n;i++) cout << pre1[i] << " ";
	// cout << endl;

	tot1 = pre1[n-1];
	tot0 = pre0[n-1];

	ll ans=n;
	for(i=0;i<n;i++){
		ll t=min(pre0[i]+(tot1-pre1[i]),pre1[i]+tot0-pre0[i]);
		ans = min(ans,t);
		//cout << "ans = " << ans << endl;
	}

	cout << ans << endl;
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