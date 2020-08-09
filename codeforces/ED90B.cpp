#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	string s;
	cin >> s;
	ll on=0,ze=0;
	ll n = s.length();
	for(auto it: s){
		if(it=='1') on++;
		else ze++;
	}

	ll ans = min(ze,on);

	if(ans%2) cout << "DA"<<endl;
	else cout << "NET"<<endl;
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