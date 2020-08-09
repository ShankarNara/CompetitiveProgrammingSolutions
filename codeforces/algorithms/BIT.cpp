#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
vector<ll> bit,a;
int n;

ll sum(ll idx){
	ll ret=0;

	for(;idx >0; idx-= (idx & -idx)){
		ret+= bit[idx];
	}
	return ret;
}

void add(ll idx,ll val){
	for(;idx<=n;idx += (idx & -idx)){
		bit[idx] += val;
	}
}

void solve(){
	ll X,Y;
	char q;
	cin >> q >> X >> Y;
	if(q=='C') cout << sum(Y) - sum(X-1)<<endl;
	else add(X,Y - a[X]);

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
	cin >> n;
	bit.assign(n+1,0); a.assign(n+1,0);
	for(ll i=1;i<=n;i++){
		cin >> a[i];
		add(i,a[i]);
	}
	cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
}