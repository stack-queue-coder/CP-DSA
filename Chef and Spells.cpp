#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a , b ,c;
		cin >> a >>  b >>  c;
		ll p = 0 ;
		p += a + b + c;
	 	p -= min(a , min(b,c));
		cout<<p<<"\n";
	}
return 0;
}

