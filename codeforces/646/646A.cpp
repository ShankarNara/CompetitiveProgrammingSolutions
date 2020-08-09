#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,x,i,even,odd;
	even = odd = 0;
	cin >> n >> x;
	for(i=0;i<n;i++){
		ll a;
		cin >> a;
		if(a%2) odd++;
		else even++;
	}

	//cout << even << " "<<odd<<endl;

	bool ans=false;
	if(odd==0) ans=false;
	else if(even==0 && x%2==0) ans=false;  
	else {
		if(odd%2==0) odd--;
		if(even + odd >= x) ans=true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;
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