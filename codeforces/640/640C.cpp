#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll dis,dis_prev=0,i,j,n,k;
	cin >> n >> k;
	//cout << n <<" "<< k<<endl;
	dis=k/n;
	while(dis-dis_prev>0){
		k+= dis-dis_prev;
		dis_prev=dis;
		dis=k/n;
	}

	cout << k << endl;
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
	while(T--) solve();    
	return 0;
}