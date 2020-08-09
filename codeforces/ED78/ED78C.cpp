#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
map<ll,ll> difr;
vector<ll> a;
void solve(){
	ll n,i,j;
	cin >> n;
	difr.clear();
	a.resize(2*n);
	for(i=0;i<2*n;i++) cin >> a[i];
	
	// for(i=0;i<2*n;i++) cout << a[i]<<" ";
	// cout << endl;
	difr[0]=0;
	ll cur=0;
	for(i=n;i<2*n;i++){
		if(a[i]==1) cur++;
		else cur--;
		if(!difr.count(cur)) difr[cur] = i-(n-1);
	}

	ll dif = count(a.begin(),a.end(),1) - count(a.begin(),a.end(),2);
	ll ans=2*n;

	cur=0;
	for(i=n-1;i>=0;i--){
		if(a[i]==1) cur++;
		else cur--;

		if(difr.count(dif-cur)) ans = min(ans,n-i + difr[dif-cur]);
	}

	if(difr.count(dif)) ans = min(ans,difr[dif]);

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