#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll N,i,j,sum=0,mx;
	cin >> N;
	vector<ll> a(N+1,0),peaks,mx_ans(N+1,0),cur(N+1,0);
	for(i=1;i<=N;i++){
		cin >> a[i];
	}
	for(i=1;i<=N;i++){
		if(a[i]>a[i-1] && a[i]>a[i+1])
			peaks.pb(i);
	}

	mx=0;
	for(auto it: peaks){
		sum=0;
		ll thr=a[it];
		for(i=it;i<=N;i++){
			if(a[i] < thr) thr=a[i];
			sum+=thr;
			cur[j]=thr;
		}
		thr=a[it-1];
		for(j=it-1;j>=1;j--){
			if(a[j]<thr) thr=a[j];
			sum+= thr; 
			cur[j]=thr;
		}

		if(mx < sum){
			mx = sum;
			mx_ans = cur;
		}
	}

	cout << mx << endl;
	for(i=1;i<=N;i++) cout << mx_ans<<" ";
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

	while(T--){
		solve();
	}    
	return 0;
}