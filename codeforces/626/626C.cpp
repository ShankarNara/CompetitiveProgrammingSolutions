	#include<bits/stdc++.h>
	#define ll long long
	#define pb push_back
	#define oo 1000000010
	#define mod 1000000007

	using namespace std;

	void solve(){
		ll n,i,j,ans;
		string s;
		cin >> n;
		ll prefix[n+1];
		cin >> s;

		ans=0;
		if (n%2==1) {
			cout << -1 << endl;
			return ;
		}
		prefix[0]=0;
		for(i=0;i<n;i++){
			if (s[i]=='(') prefix[i+1] = prefix[i]+1;
			else prefix[i+1] = prefix[i]-1;
		}
		if (prefix[n]!=0) {
			cout << -1 << endl;
			return ;
		}

		ll len=0;
		for(i=1;i<=n;i++){
			if (prefix[i]<0){
				len++;
			} else {
				ans+=len;
				if (len>0) ans++;
				len=0;
			}

		}

		cout << ans << endl;
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