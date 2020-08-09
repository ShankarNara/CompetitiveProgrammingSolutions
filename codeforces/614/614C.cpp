#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,q,i,j,bp=0;
	cin >> n >> q;
	vector<vector<ll> > a(2,vector<ll> (n));

	while(q--){
		ll r,c,d;
		cin >> r >> c;
		r--; c--;
		//cout << r << " "<<c << endl;
		d = (a[r][c]==0)? 1: -1; 

		a[r][c] = (a[r][c]+1)%2;
		r = (r+1)%2;
		for(i=-1;i<2;i++){
			if(c+i >=0 && c+i<n && a[r][c+i]==1) bp+=d;
		}

		if(bp==0) cout << "Yes"<<endl;
		else cout << "No" << endl;
	} 
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