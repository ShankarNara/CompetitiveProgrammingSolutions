#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;

void solve(){
    ll n,i,j;
    string s;
    cin >> n >> s;
    pair<ll,ll> cur = {0,0};
    map< pair<ll,ll> ,ll > coord;
    coord[cur]=0;
    ll l=-1,r=n;
    
    for(i=0;i<n;i++){
        if(s[i]=='L') cur.x--;
        else if(s[i]=='R') cur.x++;
        else if(s[i]=='U') cur.y++;
        else cur.y--;
        
        if(coord.count(cur)){
            if(i-coord[cur] < r - l){
                l=coord[cur];
                r=i;
            }
        }
        coord[cur] = i+1;
        
    }
    
    if(l==-1) cout << -1 << endl;
    else cout << l+1 << " " << r+1 << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll T=2;
	cin >> T;
	while(T--) solve();
    return 0;
}