#include<bits/stdc++.h>
#define ll long long
#define pb push_back 
std::vector<std::pair<ll,ll> > adj[1000000];
bool v[1000000];
std::map<ll,ll> k_val;

using namespace std;

ll bfs(ll s,ll n){
    queue <pair<ll,ll> >Q;
    ll i;
    Q.push({s,0});
    for(i=1;i<=n;i++){
        v[i]=false;
    }
    ll mn=1e+9;
    while(!Q.empty()){
        pair<ll,ll> p = Q.front();
        Q.pop();

        for(pair<ll,ll> i: adj[p]){
            ll a = i.first;
            ll w = i.second;
            if(!v[a]){
                pair<ll,ll> c ;
                c.first=a;
                c.second = w+p.second;
                if(k_val[a]!=1){
                    Q.push(c);
                } else {
                    mn = min(mn,c.second);
                }
            }
        }
    }

    return mn;
}
int main(){
    ll n,m,k,u,v,w,i,a;

    cin >> n >> m >> k;
    for(i=1;i<=n;i++){
        cin >> u >> v >> w;
        adj[i].pb({v,w});
    }

    for(i=0;i<k;i++){
        cin >> a;
        k_val[a]=1;
    }

    ll mn=1e+9;
    for(i=1;i<=n;i++){
        if(k_val[i]!=1){
            mn = min(bfs(i,n),min);
        }
    }
    
    cout << mn << endl;
    return 0;
}
