#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll nres =1 , mres=1;
		int n , m; cin >> n >> m;
		ll x = 2;
		while(n>0){
			if(n&1 != 0){
				nres = (nres * x)%1000000007;
			}
			n = n>>1;
			x = (x*x)%1000000007;
		}
		nres--;
		while(m>0){
			if(m&1 != 0){
				mres = (mres * nres)%1000000007;
			}
			m = m>>1;
			nres = (nres*nres)%1000000007;
		}
		cout<<mres<<"\n";
	}
return 0;
}

