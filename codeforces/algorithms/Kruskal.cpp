#include<bits/stdc++.h>
#define ll long long
#define pb push_åç√back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 1e5+2;
using namespace std;

pair < ll ,pair<ll,ll> > p[maxn];
ll id[maxn];
ll N,M;

ll root(ll a){

	while(a != id[a]){
		id[a] = id[id[a]];
		a = id[a];
	}

	return a;
}

void union_join(ll a,ll b){
	ll p= root(a);
	ll q = root(b);
	id[p] = id[q];
}

ll Kruskal(){
	ll min_cost=0;
	ll a,b,cost;

	for(ll i=0;i<M;i++){
		a = p[i].y.x;
		b = p[i].y.y;
		cost =p[i].x;

		if(root(a) != root(b)){
			min_cost+= cost;
			union_join(a,b);
		}
	}

	return min_cost;
}

void solve(){

	ll a,b,i,j,w;
	cin >> N>>M;
	for(i=0;i<maxn;i++){
		id[i]=i;
	}
	for(i=0;i<M;i++){
		cin >> a >> b >> w;
		p[i] = make_pair(w,make_pair(a,b));
	}
	sort(p,p+M);
	ll min_cost = Kruskal();
	cout << min_cost << endl;
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

	while(T--){
		solve();
	}
	return 0;
}