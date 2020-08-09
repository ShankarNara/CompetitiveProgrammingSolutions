#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n,m,k,i,j;
	cin >> n >> m >> k;
	vector<pair<ll,string> > path,ans;
	path.pb({m-1,"R"});
	path.pb({m-1,"L"});

	for(i=2;i<=n;i++){
		path.pb({1,"D"});
		path.pb({m-1,"R"});
		path.pb({m-1,"UDL"});
	}
	ans.pb({n-1,"U"});
	if (k > 4*m*n - 2*n - 2*m){
		cout << "NO"<<endl;
	} else {
		for(auto it: path){
			ll len = (it.y).size();
			if (k >= len*it.x){
				k-= len*it.x;
				if(it.x) ans.pb(it);
			} else {
				if(k/len) ans.pb({k/len,it.y});
				if(k%len) ans.pb({1,(it.y).substr(0,k%len)});
				k=0;

			}
		}

		cout << "YES"<<endl;
		cout << ans.size() << endl;
		for(auto it: ans){
			cout << it.x << " " << it.y << endl;
		}
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
	ll T;

	cin >> T;

	while(T--){
		solve();
	}	    
	return 0;
}