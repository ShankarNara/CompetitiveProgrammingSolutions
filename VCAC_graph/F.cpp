#include<bits/stdc++.h>
#define ll long long
#define pb push_back
const int N = 2000000;

using namespace std;
vector <ll>adj[N];
ll cnt;
bool v[N];

bool equivalent(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]==b[j])
            return true;
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
    return false;
}

ll getEquivalentNode(string pass[N],ll u,ll n){
    ll i;
    for(i=1;i<=n;i++){
        if(i!=u){
            if(equivalent(pass[i],pass[u])){
                return i;
            }
        }
    }
    return -1;
}

void dfs(ll s){
    v[s]=true;
    for(auto i:adj[s]){
        if(!v[i]){
            dfs(i);
        }
    }
}

void clear_visited(){
    ll i;
    for(i=0;i<N;i++){
        v[i]=false;
    }
}

int main(){
    //cout << "flag"<<endl;
    ll i,j,n,ind;
    string pass[N];
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> pass[i];
    }
    clear_visited();

    for(i=1;i<=n;i++){
        ind = getEquivalentNode(pass,i,n);
        //cout << "ind = "<<ind<<endl;
        if(ind!=-1){
            adj[i].pb(ind);
            adj[ind].pb(i);
        }
    }

    cnt=0;
    for(i=1;i<=n;i++){
        if(adj[i].size()>0 && v[i]==false){
            dfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}