#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		int i=0;
		while(n>1){
			n = n>>1;
			i++;
		}
		ll x=2;
		ll res =1;
		while(i>0){
			if(i&1 != 0){
				res = (res * x);
			}
			i = i>>1;
			x = (x*x);
		}
		cout << res -1<<"\n";
	}
return 0;
}

