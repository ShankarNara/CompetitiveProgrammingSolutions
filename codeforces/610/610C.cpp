#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j;
	cin >> n;
	set<ll> a;

	for(i=2;i*i<=n;i++){
		if(n%i==0 && !a.count(i)){
			a.insert(i);
			n/=i;
			break;
		}
	}

	for(i=2;i*i<=n;i++){
		if(n%i==0 && !a.count(i)){
			a.insert(i);
			n/=i;
			break;
		}
	}

	if(a.size()<2 || a.count(n) || n==1) cout << "NO"<<endl;
	else {
		cout << "YES" <<endl;
		a.insert(n);
		for(auto it: a) cout << it<<" ";
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
	ll T=1;
	cin >> T;
	while(T--) solve();    
	return 0;
}