#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn=2e5+1;
using namespace std;

void solve(){
	ll n,ans=0,res=0,i,m;
	cin >> n;
	ll a[n+1],t[n+1];
	multiset<ll> s;
	vector<pair<ll,ll> > v;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		cin >> t[i];
	}
	for(i=0;i<n;i++) v.pb(pair<ll,ll>(a[i],t[i]));

	sort(v.begin(),v.end());

	// for(i=0;i<v.size();i++){
	// 	cout << v[i].x << " "<<v[i].y<<endl;
	// }

	i=0;
	while(i<n){
		ll st=i;
		while(i<n && v[i].x == v[st].x){
			s.insert(v[i].y);
			res+= v[i].y;
			i++;
		}
		if(i==n) m=maxn;
		else {
			m = v[i].x - v[st].x + 1;
		}
		ll cnt=0;
		while(m--){
			auto last = s.end(); last--;
			if(m) {
				ans+= (*last)*cnt;
				res-= *last;
				s.erase(last);
			} else ans+= res*cnt;
			cnt++;
			if (s.size() == 0) break;
		}
	}

	cout << ans<<endl;
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

//	cin >> T;

	while(T--){
		solve();
	}    
	return 0;
}