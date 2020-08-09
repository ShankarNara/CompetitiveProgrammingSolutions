#include<bits/stdc++.h>
#define ll long long
ll level[1000000];
bool v[1000000];

using namespace std;

void bfs(ll n,ll m){
    ll i,s,a[100];
    queue <ll> Q;

    Q.push(n);
    v[n]=true;
    level[n]=0;

    while(!Q.empty()){
        s = Q.front();
        Q.pop();

        a[0] = 2*s;
        a[1] = s-1;

        //cout << s << "\t\t0 : "<<a[0]<<" 1 : "<<a[1]<<endl;
        for(i=0;i<2;i++){
            if(a[i]<100000 && a[i]>0){
                if(!v[a[i]] ){
                    v[a[i]]=true;
                    level[a[i]] = level[s]+1;
                    
                    Q.push(a[i]);
                    if(a[i]==m){
                        return ;
                    }
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    ll n,m,i;
    cin >>n >> m;
    for(i=0;i<100000;i++){
        level[i]=0;
        v[i]=false;
    }

    //calling bfs
    bfs(n,m);

    //displaying level of m
    cout << level[m]<<endl;
   // cout << "hello there "<<endl;
    return 0;
}