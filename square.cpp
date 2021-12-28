#include<bits/stdc++.h>
using namespace std;
typedef long double ll;
int main(){
	
		ll n,m,a;
		cin >> n>> m>> a;
		ll x = ceill(n/a);
		ll y = ceill(m/a);
		long long z = x*y ;
		cout<<z<<"\n";
return 0;
}

