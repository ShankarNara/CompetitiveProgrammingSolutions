#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,cnt=0,i;
	cin >> n;
	vector<ll> a(n+2),b(n+2);

	for(i=1;i<=n;i++) cin >> a[i];
	for(i=1;i<=n;i++) cin >> b[i];
	for(i=1;i<=n;i++) a[i]= b[i] - a[i];
	for(i=0;i<=n;i++){
		if(a[i] != a[i+1]) cnt++;
		if(a[i] < 0) {
			cout << "NO"<<endl;
			return ;
		}
	}

	if(cnt>2) cout<<"NO"<<endl;
	else cout << "YES" << endl;
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