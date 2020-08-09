#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

vector<ll> adj[1000000];
bool v[1000000];
ll cnt,start,mn;

void clear_visited(){
    ll i;
    for(i=1;i<1000000;i++){
        v[i]=false;
    }
}

// void populate_set(ll n){
//     ll i;
//     for(i=1;i<=n;i++){
//         snacks.insert(i);
//     }
// }

void dfs(ll s){
    v[s]=true;
    cnt++;
   // cout << "cnt = "<<cnt<<endl;
    for(auto i:adj[s]){
        if(v[i]==false)
            dfs(i);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll i,n,k,a,b;
	cin >> n >> k;
	for(i=0;i<k;i++){
	    cin >> a >> b;
	    adj[a].pb(b);
	    adj[b].pb(a);
	}
	
	clear_visited();
    mn=0;
	for(i=1;i<=n;i++){
	    if(v[i]==false){
    	    cnt=0;
    	    dfs(i);
    	    mn=mn + (cnt-1);
           // cout << "cnt in main = "<<cnt<<"\nmn = "<<mn<<endl;
	    }
	}
	
	cout << k - mn << endl;
	
    return 0;
}