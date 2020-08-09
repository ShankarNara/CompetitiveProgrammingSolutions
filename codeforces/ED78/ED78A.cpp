#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,cnt=0;
	string s,h,verd="NO";
	cin >> s >> h;
	n=s.size();
	vector<ll> sset(26);
	//if(sset == som) cout << "Awesome!"<<endl;
	for(i=0;i<n;i++) sset[s[i]-'a']++;
	for(i=0;i<h.size();i++){
		vector<ll> ans(26);
		for(j=i;j<h.size();j++){
			ans[h[j]-'a']++;
			if(ans==sset) verd="YES";
		}
	}

	cout << verd << endl;

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