#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 2e5+1;
using namespace std;

ll a[maxn];
map<ll,ll> al;

bool check(){
	for(ll i=1;i<4;i++) if(al[i]==0) return false;
	return true;
}

void solve(){
	string s;
	cin >> s;
	ll n = s.length();
	ll i,j,mn=n+2;
	al.clear();

	for(i=0,j=0;i<n;i++){
		ll c = s[i]-'0';
		al[c]++;

		while(j<i && check()){
			mn = min(mn,i-j+1);
			al[s[j] - '0']--;
			j++;
		}
	}	
	if(mn==n+2) mn=0;

	cout << mn << endl;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	ll T=2;
	cin >> T;
	while(T--) solve();    
	return 0;
}