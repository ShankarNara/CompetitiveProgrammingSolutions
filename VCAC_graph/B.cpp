#include<bits/stdc++.h>
#define ll long long
#define pb push_back

std::vector <ll> adj[10000];
ll level[10000];
bool v[10000];

using namespace std;

ll bfs(ll s,ll n){
    queue<ll> Q;
    ll i,c,m=0;
    for(i=1;i<=n;i++){
        level[i]=0;
        v[i]=false;
    }

    Q.push(s);

    while(!Q.empty()){
        c = Q.front();
        m=max(m,level[c]+1);
       // cout << "m = "<<m << "-->";
        Q.pop();

        for(auto i=adj[c].begin();i!= adj[c].end();i++){
            if(!v[*i]){
                Q.push(*i);
                v[*i]=true;
                level[*i]=level[c]+1;
               // cout << "m = "<<m;
            }
        }
    }
    cout << endl;

    return m;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll i,n,p,m=0;

    cin >> n;
    for(i=1;i<=n;i++){
        adj[i].clear();
    }

    for(i=1;i<=n;i++){
        cin >> p;
        if(p!=-1)
            adj[i].pb(p);
    }

    for(i=1;i<=n;i++){
        for(auto j=adj[i].begin();j != adj[i].end(); j++){
            m = max(m,bfs(*j,n));
        }
    }

    cout << m +1<< endl;
    return 0;
}