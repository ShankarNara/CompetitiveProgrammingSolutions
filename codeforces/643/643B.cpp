#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 3e5+1;
using namespace std;

ll a[maxn];
void solve(){
	ll n,i,j,cnt=0;
	cin >> n;
	for(i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	
	// for(i=0;i<n;i++) cout << a[i]<<" ";
	// cout << endl; 
	ll cur=0;

	for(i=0;i<n;i++){
		if(++cur == a[i]){
			cnt++;
			cur=0;
		}
	}

	cout << cnt << endl;
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