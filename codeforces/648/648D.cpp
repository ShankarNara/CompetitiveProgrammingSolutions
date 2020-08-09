#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second

using namespace std;
vector<string> mat;
ll n,m;
ll dx[4] = {-1,0,1,0};
ll dy[4] = {0,-1,0,1};
vector<vector<ll> > vis; 

bool bfs(ll r,ll l){
	vis.assign(n,vector<ll> (m,0));
	vis[r][l]=1;
	ll i,j;

	queue<pair<ll,ll> > Q;
	Q.push(make_pair(r,l));

	while(!Q.empty()){
		auto cur = Q.front();
		Q.pop();
		//cout << "x = "<<cur.x << " y = "<<cur.y<<endl;
		i = cur.x;
		j = cur.y;
		for(ll k=0;k<4;k++){
			ll ni = i+dx[k], nj = j+dy[k];
			
			if((ni>=0 && ni<n) && (nj>=0 && nj<m) && (mat[ni][nj]== '.' || mat[ni][nj]=='G')){
				// cout << "ni = "<<ni<<" nj = "<<nj<<endl;
				// cout << "mat[ni][nj] = "<<mat[ni][nj]<<endl;
				// cout << "vis = "<< vis[ni][nj]<<endl;
				if(vis[ni][nj]==0){

					if(ni==n-1 && nj==m-1) return true;
					Q.push(make_pair(ni,nj));
					vis[ni][nj]=1;

				}
			}			
		}
	}

	return false;
}

void solve(){
	ll i,j;
	cin >> n >> m;
	mat.resize(n);

	for(i=0;i<n;i++) cin >> mat[i];

	//Filling all empty spaces around Bad people with a wall
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(mat[i][j]=='B'){
				for(ll k=0;k<4;k++){
					ll ni = i+dx[k], nj = j+dy[k];

					if((ni>=0 && ni<n) && (nj>=0 && nj<m) && mat[ni][nj]== '.') mat[ni][nj]='#';
				}
			}
		}		
	}

	// for(i=0;i<n;i++){
	// 	cout << mat[i] << endl;
	// } cout << endl;

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			//cout << i << " "<<j << endl;

			if(mat[i][j]=='G'){
				for(ll k=0;k<4;k++){
					ll ni = i+dx[k], nj = j+dy[k];
					//cout << "mat[ni][nj] = "<<mat[ni][nj]<<endl;
					if((ni>=0 && ni<n) && (nj>=0 && nj<m) && mat[ni][nj]== 'B'){
						cout << "No" << endl;
						return ;
					}
				}
				bool verd = bfs(i,j);
				if(!verd){
					cout << "No"<<endl;
					return ;
				}
			}
		}
	}

	cout << "Yes"<<endl;
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