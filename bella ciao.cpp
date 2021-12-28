#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll D, d, P, Q; // 3 2 1 1
		cin >> D >> d >> P >> Q;
		ll q = D/d; 
		ll r = D%d; 
		ll res = (P*d*q)  + (d*Q*(q*(q-1))/2)  + ((P + q*Q)*r);
		cout << res<<"\n";
	}
return 0;
}

