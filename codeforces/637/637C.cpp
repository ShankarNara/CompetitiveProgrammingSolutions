#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

map<ll,ll> pos;
void solve(){
	ll n,i,j,lim;
	cin >> n;
	ll a[n+1];
	pos.clear();
	for(i=1;i<=n;i++){
		cin >> a[i];
		pos[a[i]]=i;
		if (a[i]==1) lim=i;
	}
	vector<bool> limit(n+2,false);
	ll it=1;
	while(it<n){
		for(i=pos[it];i<n && limit[i+1]==false;i++){
			if(i!=1){
				if(a[i+1]!=a[i]+1) {
					//cout << "i = "<<i<<" it = "<<it<<endl;
					cout << "No" << endl;
					return;
				}
			}
			it++;
			limit[i]=true;

		}
		it++;
		limit[i]=true;
	}

	cout << "Yes"<<endl;

	// while(it<n){
	// 	if(pos[it+1] != pos[it]+1 && pos[it+1] < n){

	// 	}
	// }
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