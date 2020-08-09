#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,p=0,sum=0,i;
	cin >> n;
	ll a[n+1];
	for(i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
		if(a[i]==0) p++;
	}

	sum+= p;
	if(sum==0) p++;

	cout << p << endl;
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