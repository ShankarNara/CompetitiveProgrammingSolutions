#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll a,b,tar,i;
	cin >> a >> b;
	tar = abs(a-b);
	vector<ll> but{5,2,1};

	ll sum=0;
	for(auto it: but){
		if(tar==0) break;
		sum+= (tar/it);
		ans+= sum;
		tar-= sum*it;
	}

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