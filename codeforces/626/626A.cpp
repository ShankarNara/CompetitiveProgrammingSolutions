#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,a,i,j;
	ll o1,o2,e,ans=-1;
	o1 = o2=-1;
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a;
		if (a%2==1){
			if (o1==-1) o1=i+1;
			else if (o2==-1){
				o2=i+1;
				ans=2;
			}
		} else {
			ans=1;
			e=i+1;
		}
	}

	cout << ans << endl;
	if (ans==1){
		cout << e << endl;
	} else if (ans==2){
		cout << o1 << " "<< o2<<endl;
	}

}

int main(){

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