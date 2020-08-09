#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 100;
using namespace std;
bool vis[100][100];
string s[100];
ll n;

void solve(){
	ll i,j;
	cin >> n;
	
	for(i=0;i<n;i++) cin >> s[i];
	
	bool ans = true;

	for(i=n-2;i>=0;i--){
		for(j=n-2;j>=0;j--){
			if(s[i][j]=='1' && s[i+1][j]=='0' && s[i][j+1]=='0') ans=false;
		}
	}
	if(ans) cout << "YES" << endl;
	else cout << "NO" << endl;
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