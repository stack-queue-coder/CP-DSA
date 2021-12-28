#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll x = 2;
		ll res = 1;
		while(n){
			if(n&1 != 0){// odd
				res = res * x; 
			}
				n = n>>1;
				x = x*x;
			}
		}
		cout<< res ;
//		for(int i=0;i<1023;i++){
//			cout<<i<<" xor "<<i+1<<" --> "<<(i^(i+1)) <<"\n";
//		} 
	}
return 0;
}

