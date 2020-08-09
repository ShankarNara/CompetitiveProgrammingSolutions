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
	string s;
	cin >> s;
	vector<ll> ans(n);
	vector<ll> pos1, pos0;

	for(i=0;i<n;i++){
		ll newPos = pos1.size() + pos0.size();

		if(s[i]=='0'){
			if(pos1.empty()){
				pos0.pb(newPos);
			} else {
				newPos = pos1.back();
				pos1.pop_back();
				pos0.pb(newPos);
			}
		} else {
			if(pos0.empty()){
				pos1.pb(newPos);
			} else {
				newPos = pos0.back();
				pos0.pop_back();
				pos1.pb(newPos);
			}
		}

		ans[i] = newPos;
	}

	cout << pos0.size() + pos1.size() << endl;

	for(auto it: ans) cout << it+1 << " ";

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
	while(T--) solve();    
	return 0;
}