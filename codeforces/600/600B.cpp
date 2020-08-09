#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,cnt;
	bool valid=true;
	cin >> n;
	vector<ll> a(n),ans;
	set<ll> emp,seen;

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	cnt=0;
	for(i=0,j=0;i<n;i++){
		if(a[i]>0){
			if(seen.count(a[i])) {valid=false; break;}
			else {
				emp.insert(a[i]);
				seen.insert(a[i]);
			}
		} else {
			ll val = abs(a[i]);
			if(!emp.count(val)) {valid=false; break;}
			else {
				emp.erase(val);
			}
		}
		cnt++;

		if(emp.size() == 0) {
			ans.pb(cnt);
			cnt=0;
			seen.clear();
		}
	}

	if(emp.size() != 0) valid=false;

	if(valid){
		cout << ans.size() << endl;
		for(auto it: ans) cout << it << " ";
	} else cout << -1;
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