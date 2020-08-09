#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
ll n,m,c;
char ch;
vector<ll> bit;

void add(ll idx,ll val){
	for(;idx<=n;idx+= (idx & -idx)){
		bit[idx]+= val;
	}
}

void range_update(ll l,ll r,ll val){
	add(l,val);
	add(r+1,-val);
}

ll sum(ll idx){
	ll ret=0;
	for(;idx>0;idx-= (idx & -idx)){
		ret+= bit[idx];
	}

	return ret;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	cin >> n >> m >> c;
	bit.assign(n+2,0);
	range_update(1,n,c);

	while(m--){
		cin >> ch;

		if(ch=='Q'){
			ll x;
			cin >> x;
			cout << sum(x) << endl;
		} else {
			ll u,v,k;
			cin >> u >> v >> k;
			range_update(u,v,k);
		}
	}
	return 0;
}