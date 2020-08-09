#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll k,i;
	string s = "codeforces";
	cin >> k;
	vector<ll> fact(10,1);

	ll p=0,prod=1;
	while(prod<k){
		prod/= fact[p%10];
		fact[p%10]++;
		prod*= fact[p%10];
		p++;
	}

	for(i=0;i<10;i++){
		for(ll j=0;j<fact[i];j++){
			cout << s[i];
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
	while(T--) solve();	    
	return 0;
}