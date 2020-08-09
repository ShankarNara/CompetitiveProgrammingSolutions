#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j,sum=0,sub=0;
	cin >> n;
	ll a[n+1],cnt[n+1];
	memset(cnt,0,sizeof(cnt));

	for(i=0;i<n;i++){
		cin >> a[i];
		sum+= a[i];
	}

	if(sum%3==0){
		sum = sum/3;

		for(i=n-1;i>=0;i--){
			sub+= a[i];
			if (sub == sum) cnt[i]=1;
			cnt[i] += cnt[i+1];
		}

		sub=0;
		ll ans=0;
		for(i=0;i<n-2;i++){
			sub+= a[i];
			if (sub == sum) ans+= cnt[i+2];
		}

		cout << ans << endl;
	} else {
		cout << "0\n";
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

	//cin >> T;

	while(T--){
		solve();
	}	    
	return 0;
}