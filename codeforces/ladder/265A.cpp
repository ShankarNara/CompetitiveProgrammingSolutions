#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,p,i;
	cin >> n >> p;
	string s;
	cin >> s;

	i=n-1;
	s[i]++;
	while(i>=0 && i<n){
		if(s[i] > 'a'+p-1){
			s[i]='a';
			i-=1;
			s[i]++;
		} else if ((i>0 && s[i]==s[i-1]) || (i>1 && s[i] == s[i-2])){
			s[i]++;
		} else i++;
	}

	if(i<0) cout << "NO" << endl;
	else cout << s << endl;

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
	//cin >>T;
	while(T--){
		solve();
	}	    
	return 0;
}