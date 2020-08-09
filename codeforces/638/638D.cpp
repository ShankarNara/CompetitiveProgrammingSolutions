#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i;
	cin >> n;
	vector<ll> ans;

	for(i=1;i<=n;i*=2){
		ans.pb(i);
		n-=i;
	}

	if(n>0){
		ans.pb(n);
	}
	sort(ans.begin(),ans.end());

	cout << ans.size()-1 << endl;
	for(i=1;i<ans.size();i++){
		cout << ans[i] - ans[i-1] <<" ";
	} cout << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T;
	cin >> T;
	while(T--){
		solve();
	}    
	return 0;
}