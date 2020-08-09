#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007

using namespace std;

vector<ll> getLenVect(vector<ll> a){
	ll i,j,len;
	ll n = a.size();
	vector<ll> al(n+1);
	al.clear();

	i=0;
	len=0;
	while(i<n){
		if (a[i]==1){
			len++;
			//cout << "tag" << endl;	
		} else {
			for(j=1;j<=len;j++){
				al[j] += len - j + 1;
				//cout << al[j]<<endl;
			}
			len=0;
		}

		i++;
	}

	for(j=1;j<=len;j++){
		al[j] += len - j + 1;
		//cout << al[j]<<endl;
	}

	return al;
}

void solve(){
	ll m,n,k,i,j;
	cin >> n >> m >> k;
	vector<ll> a(n),b(m);

	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(j=0;j<m;j++){
		cin >> b[j];
	}

	vector<ll> al = getLenVect(a);
	vector<ll> bl = getLenVect(b);

	ll ans=0;
	cout << al.size() << endl;
	for(i=1;i<al.size();i++){
		if (k%i==0 && k/i <= m){
			ans+= al[i]*bl[k/i]; 
		}
	}

	cout << ans << endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//My code goes here 
	
	ll T=1;
	cin >> T;

	while(T--){
		solve();
	}
	return 0;
}