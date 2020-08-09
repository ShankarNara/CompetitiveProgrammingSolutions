#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j;
	string s;
	cin >> n >> s;
	char s1='a',s2='a';
	string res,ans="YES";

	for(i=0;i<n;i++){
		if(s[i] >= s1){
			res+= '0';
			s1 = s[i];
		} else if(s[i] >= s2) {
			res+='1';
			s2 = s[i];
		} else {
			ans="NO";
		}
	}

	cout << ans<<endl;
	if(ans=="YES"){ 
		for(i=0;i<res.length();i++) cout << res[i];
		cout << endl;
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
	//cin >> T;
	while(T--) solve();	    
	return 0;
}