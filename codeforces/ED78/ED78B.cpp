#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll a,b,i,j,diff;
	cin >> a >> b;
	if(a<b) swap(a,b);
	diff=a-b;

	if(diff==0) {
		cout << "0\n";
		return;
	}

	ll sum=0;
	for(i=1;;i++){
		sum+=i;
		if(sum>=diff){
			if(sum%2 == diff%2) break;
		}
	}

	cout << i << endl;
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