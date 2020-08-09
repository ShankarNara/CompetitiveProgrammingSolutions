#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,ct,ind;
	cin >> n;
	vector<ll> a(n+1,0);
	for(i=0;i<n;i++) cin >> a[i];

	for(i=32;i>=0;i--){
		ll c = pow(2,i);
		ct=0; ind=-1;
		for(j=0;j<n;j++){
			if((a[j]&c) == c){
				ct++;
				if(ct==1) ind = j;
			}
		}
		if(ct==1) break;
		else ind=-1;
	}

	if(ind==-1){
		for(i=0;i<n;i++) cout << a[i] << " ";
	} else {
		cout << a[ind] << " ";
		for(i=0;i<n;i++){
			if(i==ind) continue;
			cout << a[i] << " ";
		}
	}

	cout << endl;
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
	while(T--){
		solve();
	}
	return 0;
}