#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll N,M,d,i,j;
	cin >> N >> M >> d;
	vector<ll> plat(M);
	vector<ll> ans(N+2);
	ll sum=0;
	string ver="YES";

	for(i=0;i<M;i++) {
		cin >> plat[i];
		sum+= plat[i];
	}
	ll spos = N-sum+1;
	ll curpos = 0;

	for(i=0;i<M;i++){
		ll reach = curpos + d;

		if(reach >= spos){
			break;
		} else {
			ll len = plat[i];

			for(j=0;j<len;j++){
				ans[reach+j] = i+1;
			}
			curpos = reach+j-1;
			spos+= len;			
		}
	}

	//Filling in remaining platforms
	for(;i<M;i++){
		for(j=0;j<plat[i];j++)
			ans[spos+j]=i+1;
		spos+= j-1;
		curpos=spos;
	}

	if(curpos+d < N+1){
		ver="NO";
	}

	cout << ver << endl;
	if(ver=="YES"){
		for(i=1;i<=N;i++) cout << ans[i] << " ";
		cout << endl;
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
	ll T=1;
	cin >> T;
	while(T--) solve();	    
	return 0;
}