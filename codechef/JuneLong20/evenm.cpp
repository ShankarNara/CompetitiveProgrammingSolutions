#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,cur;

	cin >> n;
	cur=1;
	for(i=0;i<n;i++){
		if(i%2){
			for(ll it=n-1;it>=0;it--) cout << cur+it <<" ";
		} else {
			for(ll it=0;it<n;it++) cout << cur+it<<" ";
		}
		cur+= n;
		cout<<endl;
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