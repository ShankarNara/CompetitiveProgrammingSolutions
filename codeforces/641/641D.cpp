#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define oo 1000000010
#define mod 1000000007
#define x first                 
#define y second
const ll maxn = 1e4+1;
using namespace std;

ll a[maxn];
void solve(){
	ll n,i,A,B;
	cin >> n;
	for(i=0;i<n;i++) cin >> a[i];

	ll ai=1, bi=n-1 ,cnt=1;
	A=a[0];
	ll tar=a[0];
	B=0;
	bool turn=true;
	ll sum=0;
	while(ai <= bi){
		sum=0;
		//cout << "tar = "<<tar<<endl;
		if(turn) {
			while(ai<=bi){
			//	cout << "a[bi]="<<a[bi]<<endl;
				sum+= a[bi];
				if(sum > tar){
					turn = false;
					tar=sum;
					B+=sum;
					bi--;
					sum=0;
					break;
				}
				bi--;
			} 
		} else {
			while(ai<=bi){
			//	cout << "a[ai]="<<a[ai]<<endl;
				sum+= a[ai];
				if(sum > tar){
					turn = true;
					tar = sum;
					A+= sum;
					ai++;
					sum=0;
					break;
				}
				ai++;	
			}
		}
		//cout << "sum="<<sum<<endl;
		cnt++;
	}
	if(sum>0) {
		if(turn) B+= sum;
		else A+= sum;
	}

	cout << cnt <<" "<< A << " "<< B << endl;
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