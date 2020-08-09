#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

string generate(string st){
	char c = st[3];
	ll a = c-'0';
	a = (a+1)%10;
	c = a+'0';
	st[3]=c;
	return st;
}

void solve(){
	ll n,i,j;
	string s;
	cin >> n;
	vector<vector<ll> > groups(11);
	vector<string> pin;
	set<string> sset;
	ll groupno = 0;
	for(i=0;i<n;i++){
		cin >> s;
		pin.pb(s);
		sset.insert(s);
		for(j=0;j<groups.size();j++){
			if(groups[j].size()==0) {groups[j].pb(i); groupno++; break;}
			else if(pin[groups[j][0]]==s) {groups[j].pb(i); break;}
		}
	}

	// for(auto v: groups){
	// 	for(auto it: v){
	// 		cout << pin[it]<<" ";
	// 	}
	// 	cout << endl;
	// }

	//cout << groupno << endl;
	ll ans=0;
	for(i=0;i<groupno;i++){
		if(groups[i].size() <= 1) continue;

		for(j=1;j<groups[i].size();j++){
			string st = pin[groups[i][j]];
			while(sset.count(st)){
				st = generate(st);
			}
			pin[groups[i][j]] = st;
			sset.insert(st);
			ans++;
		}
	}

	cout << ans << endl;

	for(i=0;i<n;i++){
		cout << pin[i]<<endl;
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