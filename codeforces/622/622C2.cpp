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
	stack<ll> S;
	cin >> N;
	vector<ll> a(N+2,0),pre(N+2,0),suf(N+2,0),ans(N+2,0);
	for(i=1;i<=N;i++){
		cin >> a[i];
	}
	for(i=1;i<=N;i++){
		ll ct=0;
		while(!S.empty() && a[S.top()] >= a[i]){
			S.pop();
			
		}
		if(S.empty()) ct=0;
		else ct=S.top();

		pre[i] = pre[ct] + (i-ct)*a[i];
		S.push(i);
	}
	while(!S.empty()) S.pop();
	for(i=N;i>=1;i--){
		ll ct=0;
		while(!S.empty() && a[S.top()] >= a[i]){
			S.pop();
			
		}
		if(S.empty()) ct=N+1;
		else ct=S.top();

		suf[i] = suf[ct] + (abs(i-ct))*a[i];
		S.push(i);
	}
	// for(i=1;i<=N;i++) cout << pre[i] << " "; cout << endl;
	// for(i=1;i<=N;i++) cout << suf[i] << " "; cout << endl;
	mx=0;
	ll ind=1;
	for(i=1;i<=N;i++){
		ll val = pre[i] + suf[i] - a[i];
		if(val > mx){
			mx = val;
			ind=i; 
		}
	}

	//cout << ind << endl;
	ll thr=a[ind];
	for(i=ind;i<=N;i++){
		if(a[i] < thr) thr=a[i];
		ans[i] = thr;
	}
	thr=a[ind-1];
	for(i=ind-1;i>=1;i--){
		if(a[i] < thr) thr=a[i];
		ans[i] = thr;	
	}

	for(i=1;i<=N;i++){
		cout << ans[i] << " ";
	} cout << endl;

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