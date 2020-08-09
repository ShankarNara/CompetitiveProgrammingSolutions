#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){

	ll i,j,n,u,v;
	cin >> n;
	vector < pair<ll,ll> > a[n+1];
	vector<ll> ans(n,-1);

	for(i=0;i<n-1;i++){
		cin >> u >> v;
		a[u].pb(make_pair(v,i));
		a[v].pb(make_pair(u,i));
	}

	bool flag=false;
	for(i=1;i<=n;i++){
		if(a[i].size() >= 3){
			flag=true;
			ll cnt=0;
			for(auto it: a[i]){
				ans[it.second] = cnt;
				cnt++;
				if(cnt >= 3) break; 
			}
			break;
		}
	}

	if(flag){
		ll ind=3;
		for(i=0;i<n-1;i++){
			if (ans[i]==-1){
				ans[i]=ind++;
			}
		}	
	} else {
		for(i=0;i<n-1;i++){
			ans[i] = i;
		}
	}
	

	for(i=0;i<n-1;i++){
		cout << ans[i] << endl;
	}
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

	cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
}