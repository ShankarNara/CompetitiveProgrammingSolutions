#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,v1,v2,t,d,i,j;
	cin >> v1 >> v2 >> t >> d;
	vector<ll> a(t+1,0);

	a[t]=v2;
	for(i=t-1;i>0;i--){
		a[i]=a[i+1]+d;
	}

	ll cur=v1,sum=0;
	for(i=1;i<=t;i++){
		sum+= min(cur,a[i]);
		cur+=d;
	}

	cout << sum<<endl;
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