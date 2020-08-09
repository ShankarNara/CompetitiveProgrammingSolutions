#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	string s;
	ll n0,n1,n2,i;

	cin >> n0 >> n1 >> n2;
	s="";
	if(n1==0){
		if(n0>0) {
			for(i=0;i<n0+1;i++) s+= "0";
		} else if (n2>0){
			for(i=0;i<n2+1;i++) s+= "1";
		}
	} else {
		s+="01";
		n1--;
		for(i=0;i<n0;i++) s = "0"+s;
		for(i=0;i<n2;i++) s+= "1";

		for(i=0;i<n1;i++){
			if((i+1)%2) s+= "0";
			else s+= "1";
		}
	}

	cout << s << endl;
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