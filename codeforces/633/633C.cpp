#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll mx,n,i,j,abs_dif=0;
	cin >> n;
	ll a[n+1];

	mx=-oo;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	abs_dif = -oo;
	for(i=0;i<n;i++){
		//abs_dif = max(abs_dif,abs(a[i] - mx));
		mx = max(mx,a[i]);
		abs_dif = max(abs_dif,mx - a[i]);	
	}

	ll sum2 = 0,ans;
	for(i=1;i<=1000;i++){
		sum2+= pow(2,i-1);
		if(abs_dif == 0){
			ans = 0;
			break;
		}
		if(abs_dif <= sum2){
			ans = i;
			break;
		} 
	}

	cout << ans << endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	 //Write your code here 

	 ll T;

	 cin >> T;

	 while(T--){
	 	solve();
	 }
	    
	return 0;
}