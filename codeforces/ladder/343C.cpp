#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 1e5+1;
using namespace std;
ll N,M;
ll h[maxn],p[maxn];

bool can_read(ll t){
	ll t2,cur,i,j;
	cur=1;
	for(i=1;i<=N;i++){
		t2 = cur;

		for(; t2<=M; t2++){
			ll left = h[i] - min(h[i],p[cur]);
			ll right = max(h[i],p[t2]) - h[i];
			ll sh = min(left,right);
			ll lo = max(left,right);
			if (2*sh + lo > t) break;
		}
		cur = t2;
	}

	return cur == M+1;
}

void solve(){
	ll i,j,lo,hi,mid;
	cin >> N >> M;
	lo=0; hi=1e12;
	for(i=1;i<=N;i++) cin >> h[i];
	for(i=1;i<=M;i++) cin >> p[i];
	while(lo < hi){
		mid = lo + (hi - lo)/2;

		if(can_read(mid)){
			hi = mid;
		} else
			lo = mid+1;
	}

	cout << lo << endl;

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