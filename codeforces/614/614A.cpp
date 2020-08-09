#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
set<ll> kset;

void solve(){
	ll n,s,k,i,j,ans=-1;
	cin >> n >> s >> k;
	kset.clear();

	for(i=0;i<k;i++){
		ll t;
		cin >> t;
		kset.insert(t);
	}

	for(i=s,j=s;i>=1 || j<=n;i--,j++){
		if(i>=1 && kset.find(i) == kset.end()) {
			ans=i;
			break;
		} else if(j<=n && kset.find(j) == kset.end()){
			ans=j;
			break;
		}
	}

	cout << abs(ans-s)<< endl;
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