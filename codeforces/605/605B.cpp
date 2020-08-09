#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll i,j,sum=0,n;
	string s;
	map<char,ll> c;
	cin >> s;

	for(auto ch: s) c[ch]++;

	//logic for problem
	ll t=c['L'];
	if(c['L'] != c['R']){
		t= min(c['L'],c['R']);
		c['L'] = c['R'] = t;
	}

	t=c['U'];
	if(c['U'] != c['D']){
		t = min(c['U'],c['D']);
		c['U'] = c['D'] = t;
	}

	if(c['L']==0 && c['U']!=0) {c['U'] = c['D'] = 1;}
	if(c['U']==0 && c['L']!=0) c['L'] = c['R'] = 1;

	sum = c['L']+c['R']+c['U']+c['D'];
	cout << sum << endl;
	if(sum != 0){
		for(i=0;i<c['L'];i++) cout << "L";
		for(i=0;i<c['U'];i++) cout << "U";
		for(i=0;i<c['R'];i++) cout << "R";
		for(i=0;i<c['D'];i++) cout << "D";
	}
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