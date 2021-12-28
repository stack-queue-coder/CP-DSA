#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll x;
	cin >> x;
	ll c =0;
	while(x){
		if(x&1 != 0){
			c++;
		}
		x = x>>1;
	}
	cout<<c;
return 0;
}

