#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,i;
	cin >> n;
	if(n==2) {cout << "1\n1"; return;}
	else if(n==3) {cout << "2\n1 3"; return ;}
	else if(n==4) {cout << "4\n3 1 4 2"; return ;}
	else {
		cout << n<<endl;
		for(i=n;i>0;i-=2) cout << i<<" ";
		for(i=n-1;i>0;i-=2) cout << i << " ";
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