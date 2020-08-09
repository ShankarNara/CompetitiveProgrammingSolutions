#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll a,b,p,i,j;
	cin >> a >> b >> p;
	string s;
	cin >> s;
	ll n = s.length();
	ll rb[n+1];
	memset(rb,0,sizeof(rb));
	bool flag=true;
	if(s[n-2]=='B') flag=false;

	for(i=n-2;i>=0;i--){
		if (s[i]=='A' && flag) {rb[i] += a; flag=!flag;}
		if (s[i]=='B' && !flag) {rb[i] += b; flag=!flag;}
	}

	for(i=n-2;i>=0;i--){
		rb[i]+= rb[i+1];
	}

	// for(i=0;i<n;i++){
	// 	cout << rb[i]<<" ";
	// } cout << endl;

	for(i=0;i<n-1;i++){
		if (p>= rb[i])
			break;
	}

	cout << i+1 << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T;

	cin >> T;

	while(T--){
		solve();
	}	    	
	return 0;
}