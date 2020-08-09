#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j;
	string s;
	ll cnt=0;

	cin >> n;
	cin >> s;

	if (n==1) {
		cout << 0 << endl;
		return ;
	}

	for(j=25;j>0;j--){
		char ch = char (97+j);
		ll cur=1;

		while(cur>0){
			cur=0;

			for(i=0;i<n-1;i++){
				if(s[i] == s[i+1]+1 && s[i]==ch){
					s.erase(i,1);
					cur=1;
					break;
				} else if (s[i+1] == s[i]+1 && s[i+1]==ch){
					s.erase(i+1,1);
					cur=1;
					break;
				}
			}

			cnt+=cur;
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

	//cin >> T;

	while(T--){
		solve();
	}


	return 0;
}