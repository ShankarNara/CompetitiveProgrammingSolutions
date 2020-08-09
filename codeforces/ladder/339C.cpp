#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;
ll rePos[1002][12][12];
ll res[1001]={0};
ll m;
string s;

ll isReachable(ll step,ll bal,ll prev){
	if (bal<0 || bal>10 || (step!=m && bal==0)){
		return 0;
	} 
	if (step==0){
		rePos[step][bal][prev]=1;
		return 1;
	}
	if (rePos[step][bal][prev]!=-1) return rePos[step][bal][prev];

	for(ll i=0;i<10;i++){

		if (s[i]=='1' && (i+1)!=prev){
			res[step] = i+1;
			if(isReachable(step-1,(i+1) - bal,i+1)){
				rePos[step][bal][prev]=1;
				return 1;
			}
		}
	}

	rePos[step][bal][prev]=0;
	return 0;
}


void solve(){
	ll i,j;
	memset(rePos,-1,sizeof(rePos));
	cin >> s;
	cin >> m;

	if (isReachable(m,0,11)){
		cout << "YES" << endl;
		for(i=m;i>=1;i--){
			cout << res[i]<<" ";
		}
		cout << endl;
	} else {
		cout << "NO" << endl;
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
	ll T = 1;

	//cin >> T;

	while(T--){
		solve();
	}	    
	return 0;
}