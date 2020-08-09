#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i,m;
	cin >> n >> k;
	string s;
	cin >> s;

	vector<ll> cnt(26);

	for(auto c: s){
		cnt[c-'a']++;
	}

	for(ll len=n;len>=1;len--){
		vector<bool> vis(len,false);
		vector<ll> cycles;

		for(ll j=0;j<len;j++){ 
			if(vis[j]) continue;

			ll i = (j+k)%len;
			vis[j]=true;
			cycles.pb(0);
			cycles.back()++;

			while(!vis[i]){
				cycles.back()++;
				vis[i]=true;
				i = (i+k)%len;
			}
		}

		// for(auto it: cycles) cout << it << " ";
		// cout << endl;

		vector<ll> new_cnt(cnt);
		sort(cycles.begin(),cycles.end());
		sort(new_cnt.begin(),new_cnt.end());

		bool ans=true;

		while(!cycles.empty()){
			if(new_cnt.back() < cycles.back()){
				ans=false;
				break;
			} else {
				new_cnt.back()-= cycles.back();
				cycles.pop_back();
				sort(new_cnt.begin(),new_cnt.end());
			}
		}

		if(ans){
			cout << len << endl;
			return;
		}
	}
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