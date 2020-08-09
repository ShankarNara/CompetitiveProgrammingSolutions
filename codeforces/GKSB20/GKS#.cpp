#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000000
ll N,S,E,W;
using namespace std;


void solve(){
	ll i,x,y,j,n,m=1;
	string s;
	cin >> s;
	N=S=E=W=0;
	ll d = 0;
	vector<ll> mul;

	for(i=0;i<s.length();i++){
		y = S - N;
		x = E - W;
		if(s[i]=='N') N+= m;
		else if (s[i]=='S') S+= m;
		else if (s[i] == 'E') E+= m;
		else if (s[i] == 'W') W+= m;
		else if (s[i] == ')'){
			ll div = mul[mul.size()-1];
			vector<ll> ::iterator it = mul.end()-1;
			m=m/div;
			mul.erase(it);
		} 
		else if (s[i] == '('){}
		else {
			ll mlt = s[i] - '0';
			m*=(mlt);
			mul.pb(mlt);
		}
		if(x < 0) x+=mod; x%=mod;
		if (y<0) y+=mod; y%=mod; 
	}

	cout << x+1 << " "<<y+1<<endl;


}

int main(){


	//My code goes here 
	ll T;

	cin >> T;

	for(ll t=1;t <= T;t++){
		cout << "Case #"<<t<<": ";
		solve();
	}
	    
	return 0;
	
	
}