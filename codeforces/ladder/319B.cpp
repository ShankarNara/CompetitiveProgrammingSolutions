#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,i,j,top=1,ans=-1;
	stack<ll> s;
	cin >> n;
	ll id[n+1],time[n+1];
	memset(time,0,sizeof(time));

	for(i=1;i<=n;i++){
		cin >> id[i];
	}

	s.push(1);
	time[1]=-1;
	for(i=2;i<=n;i++){
		while(!s.empty() && id[i]>id[s.top()]){
			top = s.top();
			time[i] = max(time[i],time[top]+1);
			s.pop();
		}

		if (s.empty()){
			time[i]=-1;
		}
		s.push(i);
		ans = max(ans,time[i]);
	}

	cout << ans+1 << endl;
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