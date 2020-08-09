#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
const ll maxn=1e9;
using namespace std;

void solve(){

	ll n,i,j,p=1;

	cin >> n;

	for(i=1;p<maxn;i++){
		p+= pow(2,i);

		if(n%p==0){
			cout << n/p<<endl;
			break;
		}
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

	while(T--){
		solve();
	}
	return 0;
}