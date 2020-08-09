#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll sum,N,M,i,j;
	cin >> N >> M;
	vector<ll> a(N+1);
	vector<vector<ll> > modval(M+1);
	vector<ll> sums(M+1);

	for(i=1;i<=N;i++) {
		cin >> a[i];
	}

	sort(a.begin(),a.end());
	for(i=1;i<=N;i++){
		modval[(i-1)%M].pb(a[i]);
	}
	sum=0;
	for(i=1;i<=N;i++){
		ll ind = (i-1)%M;
		sums[ind]+= modval[ind][(i-1)/M];
		sum	+= sums[ind];

		cout << sum << " ";
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