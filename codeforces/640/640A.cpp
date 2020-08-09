#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,cnt=0;
	cin >> n;
	vector<ll> ans;
	for(i=1;n>0;i*=10){
		ll rem= n%10;
		n/=10;
		if(rem==0) continue;
		ans.pb(rem*i);
	}

	cout << ans.size()<<endl;
	for(auto it: ans) cout << it<<" ";
	cout <<endl;
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