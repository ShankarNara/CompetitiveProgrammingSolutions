#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

ll solve(){
	ll N,K,a,cnt=0;

	cin >> N >> K;
	ll cur=K;
	for(ll i=0;i<N;i++){
		cin >> a;
		if(a==cur){
			cur--;
			if(cur==0) {
				cnt++;
				cur=K;
			} 
		}
		else {
			cur=K;
			if(a==K) cur--;
		}
	}

	return cnt;
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
	for(ll it=1;it<=T;it++){
		cout << "Case #"<<it<<": "<<solve()<<endl;	
	} 
	return 0;
}