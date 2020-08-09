#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

ll search(ll t,vector<ll> &a){
	for(ll i=0;i<a.size();i++) if(a[i]==t) return i;
}

void solve(){
	ll n,i,j;
	cin >> n;
	vector<ll> a(n);
	set<ll> movs;

	for(i=0;i<n;i++) {
		cin >> a[i];
		movs.insert(i);
	}

	ll ind=1;
	ll tobe=0;
	while(ind<=n){
		ll pos = search(ind,a);
		//cout << "pos = "<<pos<<endl;
		if(pos <= tobe){
			tobe = max(tobe,pos+1);
		} else {
			for(i=pos-1;i>=tobe;i--){ 
				swap(a[i],a[i+1]);
			}
			tobe=pos;
		}

		ind++;
	}

	for(i=0;i<n;i++) cout << a[i] << " ";
	cout << endl;
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