#include<bits/stdc++.h>
#define ll long long
#define pb push_back 
std::vector<std::pair<ll,ll> > adj[1000000];
ll k_val[1000000];
std::map<ll,ll> k_map;

using namespace std;

bool isPresent(ll w,ll k){
    ll i;
    for(i=0;i<k;i++){
        if(k_val[i]==w)
            return true;
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    ll n,m,k,u,v,w,i,a,mn;
    bool flag=true;
    k_map.clear();

    cin >> n >> m >> k;
    for(i=1;i<=m;i++){
        cin >> u >> v >> w;
        adj[u].pb({v,w});
        adj[v].pb({u,w});
    }

    for(i=0;i<k;i++){
        cin >> a;
        k_val[i]=a;
        k_map[a]=1;
    }

    mn=1e+9;
    if(k>0){
        for(i=1;i<=n;i++){
            if (k_map[i]==1){
                for(pair <ll,ll> ii: adj[i]){
                    v = ii.first;
                    w = ii.second;
                    if(!isPresent(v,k)){
                        mn = min(mn,w);
                        flag=false;
                    }
                }
            }
        }
    }

    if(flag){
        mn=-1;
    } 
    cout << mn << endl;
    return 0;
}
