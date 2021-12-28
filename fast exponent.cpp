#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll res =1;
		int n; cin >> n;
		n = n-1;
		ll x = 2;
		while(n>0){
			if(n&1 != 0){
				res = (res * x)%1000000007;
			}
			n = n>>1;
			x = (x*x)%1000000007;
		}
		cout<<res<<"\n";
	}
return 0;
}

