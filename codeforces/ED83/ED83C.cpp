#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll i,j,n,k,s;
	cin >> n >> k;
	ll a[n+1];

	for(s=0;pow(k,s)<1e16;s++);

	for(i=0;i<n;i++){
		cin >> a[i];	
	} 

	vector<ll> cand;
	ll thr=0;
	string ans=  "YES";

	for(i=s;i>=0;i--){
		thr = pow(k,i);
		for(j=0;j<n;j++){
			if(a[j] >= thr)
				cand.pb(j);
		}

		if (cand.size() > 1){
			ans = "NO";
			break;
		} else {
			a[cand[0]]-= thr;
			cand.clear();
		}
	}

	bool flag=false;
	for(i=0;i<n;i++){
		if(a[i]!= 0) flag=true;
	}

	if(flag) ans="NO";

	cout << ans << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T=1;

	cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
	
}