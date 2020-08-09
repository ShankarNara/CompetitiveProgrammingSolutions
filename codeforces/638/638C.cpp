#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,k,i,j;
	string s;
	cin >> n >> k;
	cin >> s;

	sort(s.begin(),s.end());
	if(s[0] != s[k-1]){
		cout << s[k-1] << endl;
		return ;
	}

	cout << s[0];
	if(s[k] != s[n-1]){
		for(i=k;i<n;i++){
			cout << s[i] ;
		}

	} else {
		for(i=0;i<(n-1)/k;i++){
			cout << s[k];
		}
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
	ll T;
	cin >> T;
	while(T--){
		solve();
	}    
	return 0;
}