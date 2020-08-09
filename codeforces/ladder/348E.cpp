#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

map<int, map<int,int> > xt;

void add(ll a,ll x,ll t){
	for(;t<=1e9+17;t+= (t & -t)){
		xt[x][t]+= (a==1)? 1: -1;
	}
}

ll sum(ll x,ll t){
	ll ret=0;
	for(;t>0;t-= (t & -t)){
		ret+= xt[x][t];
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
	ll n;
	cin >> n;

	while(n--){
		ll a,t,x;
		cin >> a >> t >> x;
		if(a != 3) add(a,x,t);
		else cout << sum(x,t) << endl;
	}	    
	return 0;
}