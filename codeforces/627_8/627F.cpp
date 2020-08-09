    #include<bits/stdc++.h>
    #define ll long long
    #define pb push_back
    #define oo 1000000010
    #define mod 1000000007
     
     
    using namespace std;
    vector<int> a;
    vector<int> ans;
    vector<int> dp;
    vector<vector<int> > adj;
     
    void dfs(int s,ll p=-1){
    	dp[s] = a[s];
     
    	for(auto it: adj[s]){
    		if(p != it){
    			dfs(it,s);
    			dp[s]+= max(dp[it],0);
    		}
    	}
    }
     
    void dfsAllNodes(int s,int p=-1){
    	ans[s] = dp[s];
     
    	for(auto it: adj[s]){
    		if(p != it){
    			dp[s] -= max(0,dp[it]);
    			dp[it] += max(0,dp[s]);
    			dfsAllNodes(it,s);
    			dp[it]-= max(0,dp[s]);
    			dp[s] += max(0,dp[it]);
    		}
    	}
    }
     
    void solve(){
    	int n,i,j,u,v;
    	cin >> n;
    	a = ans = dp = vector<int> (n);
    	adj = vector<vector<int> > (n);
     
    	for(i=0;i<n;i++){
    		int val;
    		cin >> val;
    		if(val==0) a[i]=-1;
    		else a[i]=val;
    	}
     
    	for(i=0;i<n-1;i++){
    		cin >> u >> v;
    		u--;
    		v--;
     
    		adj[u].pb(v);
    		adj[v].pb(u);
    	}
     
    	dfs(0);
    	dfsAllNodes(0);
     
    	for(i=0;i<n;i++){
    		cout << ans[i] << " ";
    	}  cout << endl;
    }
     
    int main(){
     
     
    	//My code goes here 
    	ll T=1;
    	
    	cin >> T;
     
    	while(T--){
    		solve();
    	}    
    	    
    	return 0;
    }