#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn=1e9+10;
using namespace std;

void solve(){
	ll a,ans,pos,N,K;
	cin >> N >> K;
	ll i,j;

	ans=maxn;
	for(i=0;i<N;i++){
		cin >> a;
		if(K%a==0 && ans > K/a) {
			ans=K/a;
			pos=a;
		}
	}

	if(ans==maxn) cout << -1 << endl;
	else cout << pos << endl;
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