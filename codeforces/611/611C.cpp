#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
	ll n;
	cin >> n;
	vector<ll> f(n),in(n),out(n);

	for(ll i=0;i<n;i++){
		cin >> f[i];
		f[i]--;
		if(f[i]!= -1){
			out[i]++;
			in[f[i]]++;
		}
	}

	vector<ll> loops;
	for(ll i=0;i<n;i++){
		if(in[i]==0 && out[i]==0) loops.pb(i);
	}

	if(loops.size()==1){
		ll idx = loops[0];
		for(ll i=0;i<n;i++){
			if(in[i]==0 && i!=idx){
				f[idx]=i;
				out[idx]++;
				in[i]++;
				break;
			}
		}
	} else {
		for(ll i=0;i<loops.size();i++){
			ll cur=loops[i];
			ll next = loops[(i+1)%(loops.size())];
			f[cur]=next;
			out[cur]++;
			in[next]++;
		}
	}

	loops.clear();
	vector<ll> ins,outs;

	for(ll i=0;i<in.size();i++){
		if(in[i]==0) ins.pb(i);
		if(out[i]==0) outs.pb(i);
	}

	for(ll i=0;i<outs.size();i++){
		f[outs[i]]=ins[i];
	}

	//Displaying the answer
	for(ll i=0;i<n;i++){
		cout << f[i]+1<<" ";
	}

	cout << endl;

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