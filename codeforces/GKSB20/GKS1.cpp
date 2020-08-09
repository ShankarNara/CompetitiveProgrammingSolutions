#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

ll solve(){
	ll thr,i,j,n,d;
	cin >> n >> d;
	ll a[n+1];

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	thr=d;
	for(i=n-1;i>=0;i--){
		ll c = thr/a[i];
		thr = c*a[i];
	}

	return thr;
}

int main(){

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T=1,t;

	cin >> T;

	for(t=1;t<=T;t++){
		cout << "Case #" << t << ": "<<solve() << endl;
	}	    
	return 0;
}