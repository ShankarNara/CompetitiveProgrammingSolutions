#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){

	ll n,i,j,a;
	map<ll,ll> fr;
	cin >> n;
	string ans="NO";
	fr.clear();

	for(i=0;i<n;i++){
		cin >> a;
		if(fr.find(a) != fr.end()){
			//cout << a<<" : "<<fr[a]<<endl;
			if (i - fr[a] >= 2){
				ans = "YES";
			}
		} else {
			fr[a] = i;
		}
	}

	cout << ans << endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
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