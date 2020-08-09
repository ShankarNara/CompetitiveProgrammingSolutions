#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

ll get_max(vector<ll> a){
	ll i,mx=0;
	for(i=0;i<a.size();i++){
		mx = max(mx,a[i]);
	}
	return mx;
}

void solve(){
	ll n,k,i,j;
	string s;

	cin >> n >> k;
	cin >> s;

	vector<vector<ll> > fr((k+1)/2 ,vector<ll> (26));

	for(i=0;i<n;i++){
		ll ind = min(i%k,k-i%k-1);
		fr[ind][int(s[i] - 'a')]++;
	}

	ll ans=0;
	for(i=0;i<(k)/2;i++){
		ans += (2*n/k - get_max(fr[i]));
	}

	if(k%2==1){
		ans+= (n/k - get_max(fr[k/2]));
	}

	cout << ans << endl;
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