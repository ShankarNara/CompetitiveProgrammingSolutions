#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

map<ll,ll> fr;
void solve(){
	ll a,n,i,j;
	string s;
	cin >> a >> s;
	n=s.length();
	vector<ll> arr(n+1,0),pre(n+1);
	fr.clear();

	for(i=0;i<n;i++) arr[i+1] = s[i]-'0';
	for(i=1;i<=n;i++) pre[i] = pre[i-1]+arr[i];

	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			fr[pre[j] - pre[i-1]]++;
		}
	}	

	ll cnt=0;
	if(a==0) cnt+= fr[0]*(n*(n+1)) - fr[0]*fr[0];
	else{
		for(auto it: fr){
			if(it.x==0) continue;

			if(a%it.x==0){
				ll cp = a/it.x;
				cnt+= (it.y* fr[cp]);
			}
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