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
	set<char> acc;
	ll sum=0,n,k;
	cin >> n >> k;
	cin >> s;
	for(ll i=0;i<k;i++) {
		char a;
		cin >> a;
		acc.insert(a);
	}
	//if(acc.count('a')) cout << "awesome\n";

	sum=0;
	ll ans=0;
	for(auto ch: s){
		if(!acc.count(ch)){
			ans+= sum*(sum+1)/2;
			sum=0;
		} else sum++;
	}
	ans+= sum*(sum+1)/2;

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