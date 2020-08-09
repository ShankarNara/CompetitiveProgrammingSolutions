#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll i,j,mx=0,n,k;
	cin >> n >> k;
	set<ll> s;
	for(i=0;i<n;i++){
		ll a;
		cin >> a;
		s.insert(a);
	}

	if(s.size() > k) {
		cout << -1 << endl;
		return;
	}

	//Displaying elements of set n times along with trailing 1's if necesssary
	cout << n*k<<endl;
	for(i=0;i<n;i++){
		for(auto it: s) cout << it << " ";
		for(j=0;j<k-(int)s.size();j++){
			cout << 1 <<" ";
		}
	}

	cout << endl;
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
	while(T--){
		solve();
	}	    
	return 0;
}