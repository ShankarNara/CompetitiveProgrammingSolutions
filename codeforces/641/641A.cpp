#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i;
	cin >> n >> k;
	ll ans=n,p=n;
	if(n%2){	
		for(i=2;i*i<=n;i++){
			if(n%i==0) {
				p=i;
				break;
			}
		}
		ans+=p;
	} else ans+=2;
	k--;

	ans+= 2*k;

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