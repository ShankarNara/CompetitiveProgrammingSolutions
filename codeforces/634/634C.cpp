#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){

	ll n,i,j,mx;
	set<ll> dis;
	map<ll,ll> fre;
	cin >> n;
	ll a[n+1];
	mx=0;

	for(i=0;i<n;i++){
		cin >> a[i];
		dis.insert(a[i]);
		fre[a[i]]++;
	}

	ll l = dis.size();
	for (auto it: dis){
		ll f = fre[it];

		if(f > l) mx = max(l,mx);
		else if (f==l) mx = max(l-1,mx);
		else mx = max(mx,f);
	}

	cout << mx << endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	 //Write your code here 

	ll T;

	cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
}