#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

vector<ll> b;
vector<bool> vis;
map<char,ll> num;

bool allTrue(){
	ll n=vis.size();
	for(ll i=0;i<n;i++){
		if(!vis[i]) return false;
	}

	return true;
}

void solve(){
	num.clear();
	string s, ans="";
	ll m,i,j;
	cin >> s;
	cin >> m;
	b.assign(m,0);
	vis.assign(m,false);
	vector<ll> zer;
	for(i=0;i<m;i++){
		cin >> b[i];
	}
	for(i=0;i<m;i++) ans+= '.';

	for(auto it: s){
		num[it]++;
	}

	sort(s.begin(),s.end(),greater<char> ());

	bool allZeros = false;
	ll pt=0;
	while(!allZeros){

		if(allTrue()){
			break;
		}
		for(i=0;i<m;i++){
			if(b[i]==0 && !vis[i]){
				zer.pb(i);
				vis[i]=true;
			}
		}

		while(num[s[pt]] < zer.size()){
			pt+= num[s[pt]];
		}

		for(auto it: zer) {
			ans[it] = s[pt];
		} pt+= num[s[pt]];

		for(i=0;i<m;i++){
			for(auto it: zer){
				if(b[i] > 0) b[i]-= abs(it-i);
			}
		}

		zer.clear();
	}

	cout << ans << endl;
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