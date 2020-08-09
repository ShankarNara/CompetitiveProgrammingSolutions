#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll i,j,n,x,a,t,k;
	vector<ll> diff(2,0);
	ll sum=0,cnt=1,last=0;

	cin >> n;

	for(i=0;i<n;i++){
		cin >> t;

		if(t==1){
			cin >> a >> x;
			sum+= a*x;
			if (a==cnt) last+=x;
			diff[1]+=x;
			if(a<cnt) diff[a+1]-=x;

		} else if (t==2){
			cin >> k;
			sum+=k;
			cnt++;
			diff.pb(k-last);
			last=k;
		} else {
			sum-=last;
			last = last - diff[cnt];
			cnt--;
			diff.pop_back();
		}

		cout << fixed << setprecision(10);
		double ans = (sum*1.0)/cnt;
		cout << ans << endl;
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