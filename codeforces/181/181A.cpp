#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i,j,t,an,bn,cn;
	vector<ll> a,b,c;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> t;
		if(t==0) c.pb(t);
		else if(t<0) a.pb(t);
		else b.pb(t);
	}
	an=a.size();	
	if(b.size()==0) {
		b.pb(a[0]);b.pb(a[1]);
		a[0]=a[1]=0;
		an-=2;
	}
	if(an%2==0){
		if(an==a.size()-2) {c.pb(a[3]); a[3]=0; an--;}
		else {c.pb(a[0]); an--; a[0]=0;}
	}

	//displaying a , b, c;

	cout << an << " ";
	for(auto it: a) if(it!=0) cout << it << " ";
	cout << endl;
	cout << b.size()<<" ";
	for(auto it:b) cout << it << " ";
	cout << endl;
	cout << c.size()<<" ";
	for(auto it: c) cout << it <<" ";
	cout<<endl;
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
//	cin >> T;
	while(T--){
		solve();
	}    
	return 0;
}