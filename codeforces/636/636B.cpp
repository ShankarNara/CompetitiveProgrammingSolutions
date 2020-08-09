#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j;
	vector<ll> odd,even;
	string ans="NO";
	cin >> n;
//	cout << n<<endl;

	if((n/2)%2 == 0){
		ans="YES";
		for(i=1;i<=n-2;i++){
			if(i%2==0) even.pb(i);
			else odd.pb(i);
		}
		ll s = even.size();
		even.pb(n);
		odd.pb(n+s);
	} 

	cout << ans << endl;
	if(ans!= "NO"){
		for(i=0;i<even.size();i++){
			cout << even[i] << " ";
		}
		for(i=0;i<odd.size();i++){
			cout << odd[i]<<" ";
		}
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
	ll T;
	cin >> T;

	while(T--){
		solve();
	}
	    
	return 0;
}