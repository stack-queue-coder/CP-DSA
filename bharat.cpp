#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[100002];

ll chefora(ll i){
	ll n = i;
	ll x;
	while(n>=10){
		n /= 10;
		x = n % 10;
		i *= 10;	
		i += x;
	}
	return i;
}

void precomp(){
	arr[0] = 0;
	for(int i=1;i<=100000;i++){
		arr[i] = arr[i-1] + chefora(i);
	}
}

ll FastPow(ll base , ll power){
	
	ll x = base ;
	ll res = 1;
	while(power > 0){
		if(power&1 != 0){
			res = (res * x)%1000000007;
		}
		x =  (x*x)%1000000007;
		power = power>>1;
	}
	return res;
}

int main(){
	precomp();
	int t;
	cin >> t;
	while(t--){
		ll l,r;
		cin >> l >> r;
		ll p = arr[r] - arr[l];
		ll b = arr[l] - arr[l-1];
		cout<<FastPow(b , p)<<"\n";
	}
	return 0;
}

