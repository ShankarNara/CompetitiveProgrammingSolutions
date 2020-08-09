#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j;
	cin >> n;
	vector<ll> a(n);
	set<ll> pairs;
	for(i=0;i<n;i++) cin >> a[i];

	ll odd=0,even=0;
	string ans="NO";
	for(i=0;i<n;i++){
		if(a[i]%2) odd++;
		else even++;
		pairs.insert(a[i]);
	}	

	if(odd%2){
		for(j=0;j<n;j++){
			if(pairs.count(a[j]-1) ||  pairs.count(a[j]+1)) ans="YES";
		}
	} else ans="YES";

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