#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll N,i,ch5=0,ch10=0,ch15=0,cust;

	cin >> N;
	bool ans = true;
	for(i=0;i<N;i++){
		cin >> cust;
		if(cust==5) ch5++;
		else if(cust==10){
			if(ch5>0){
				ch5--;
			}
			else ans=false;
			ch10++;
		} else if(cust==15){
			if(ch10>0) {ch10++;}
			else if(ch5>1) ch5-=2;
			else ans=false;
			ch15++;
		}
	}

	if(ans) cout << "YES" << endl;
	else cout << "NO"<<endl;
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