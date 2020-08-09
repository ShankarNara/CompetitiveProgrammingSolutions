#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

vector<ll> pre;

void solve(){
	ll n,k,i,j,cnt,ans;
	cin >> n >> k;
	string s;
	cin >> s;
	pre.assign(n+1,0);

	for(i=0;i<n;i++){
		char ch = s[i];
		ll l,r;
		if(ch == '1'){
			l = max(1LL*0,i-k);
			r = min(n-1,i+k)+1;

			pre[l]+=1;
			pre[r]+=-1;
		}
	}

	for(i=1;i<n;i++){
		pre[i] += pre[i-1];
	}

	// for(i=0;i<n;i++) cout << pre[i]<<" ";
	// 	cout << endl;

	cnt=0;
	ans=0;
	for(i=0;i<n;i++){
		if(pre[i]==0) cnt++;
		else {
			ans+= cnt/(k+1);
			if(cnt%(k+1)) ans++;
			cnt=0;
		}
	}

	if(cnt>0){
		ans+= cnt/(k+1);
		if(cnt%(k+1)) ans++;
	}

	cout << ans << endl;
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