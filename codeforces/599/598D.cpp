#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll N,K,i,j;
	string s,ans;
	cin >> N >> K;
	vector<ll> pos0;

	cin >> s;
	for(i=0;i<N;i++) if(s[i]=='0') pos0.pb(i);

	ans="";
	for(i=0;i<N;i++) ans+= "1";

	ll n0 = pos0.size();
	for(i=0,j=0;i<n0;i++){
		ll cur=pos0[i];

		if(K >= cur-j){
			K-= (cur-j);
			ans[j]='0';
			j++;
		} else {
			ans[cur-K] = '0';
			i++;
			break;
		}
	} 

	for(;i<n0;i++) ans[pos0[i]]='0';

	cout << ans << endl;
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