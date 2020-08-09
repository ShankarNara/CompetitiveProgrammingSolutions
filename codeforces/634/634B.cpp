#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

void solve(){
	ll n,a,b,i;
	cin >> n >> a >> b;
	string sub="",s="";

	if(a==1){
		for(i=0;i<n;i++){ s+=char(97+i);}
		cout <<  s << endl;
		return ;
	}
	char c='a';
	for(i=0;i<a;i++){
		if(i<b) {
			c = char(97+i);
			sub += c;
		} else
			sub += c;
	}

	for(i=0;i<n;i++){
		s += sub[i%a];
	}

	cout << s << endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	 //Write your code here 
	 //cout << char(98);
	   
	 ll T;

	 cin >> T;

	 while(T--){
	 	solve();
	 }
	return 0;
}