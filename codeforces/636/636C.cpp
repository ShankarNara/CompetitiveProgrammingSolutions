#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j,mx=-oo,sum=0;
	bool isPos = true;
	cin >> n;
	ll a[n+1];

	for(i=0;i<n;i++){
		cin >> a[i];
	}
	if (a[0]<0) isPos=false;

	for(i=0;i<n;i++){
		if (isPos){
			if (a[i]>0) mx = max(mx,a[i]);
			else {
				sum+=  mx;
				mx = a[i];
				isPos=false;
			} 
		} else {
			if (a[i]<0) mx = max(mx,a[i]);
			else {
				sum+= mx;
				mx = a[i];
				isPos=true;
			}
		}
	}

	sum+=mx;

	cout << sum << endl;
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