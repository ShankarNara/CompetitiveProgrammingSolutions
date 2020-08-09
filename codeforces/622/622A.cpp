#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll a,b ,c,cnt=0;
	cin >> a >> b >> c;
	if(a<b) swap(a,b); if(a<c) swap(a,c); if(b<c) swap(b,c);
	if(a>0) {a--;cnt++;}
	if(b>0) {b--;cnt++;}
	if(c>0) {c--;cnt++;}
	if(a>0 && b>0) {cnt++;a--;b--;}
	if(a>0 && c>0) {cnt++;a--;c--;}
	if(c>0 && b>0) {cnt++;c--;b--;}
	if(a>0&&b>0&&c>0) cnt++;

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

	while(T--){
		solve();
	} 
	    
	return 0;
}