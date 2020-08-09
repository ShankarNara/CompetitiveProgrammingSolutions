#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll N,K,i,j;
	cin >> N >> K;

	vector<ll> fact;
	for(i=1;i*i<= N;i++){
		if(N%i==0) {
			fact.pb(i);
			fact.pb(N/i);
		}
	}

	sort(fact.begin(),fact.end());

	// for(auto it: fact) cout << it << " ";
	// cout << endl;

	ll ans,n = fact.size();
	for(i=0;i<n;i++){
		if(fact[i] > K) break;
		ans=fact[i];
	}
	
	cout << N/ans << endl;
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