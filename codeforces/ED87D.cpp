#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 1e6+1;
using namespace std;

ll N,Q;
vector<ll> bit;
void add(ll ind,ll val){
	for(;ind <= N;ind += (ind & -ind)){
		bit[ind]+=val;
	}
}

ll sum(ll idx){
	ll ret=0;
	for(;idx>0;idx -= (idx & -idx)){
		ret += bit[idx];
	}

	return ret;
}

ll find(ll k){
	ll l=1,h=N;
	ll mid;
	ll pos=0;

	while(l<h){
		mid = l + (h-l)/2;

		if(sum(mid) >= k)
			h=mid;
		else l=mid+1;
	}

	//cout << "l = "<<l<<endl;
	return l;
}

void solve(){
	ll i,j;
	cin >> N >> Q;
	bit.assign(N+1,0);

	ll a;
	for(i=0;i<N;i++){
		cin >> a;
		add(a,1);
	}

	while(Q--){
		ll val;
		cin >> val;

		if(val > 0){
			add(val,1);
		} else {
			val = abs(val);
			//add(val,-1);
			ll ind = find(val);
			add(ind,-1);
		}
	}

	// for(i=1;i<=N;i++) cout << bit[i]<<" ";
	// 	cout << endl;

	ll pos = find(1);
	if(pos==N && bit[pos]==0) pos=0;

	cout << pos << endl;


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