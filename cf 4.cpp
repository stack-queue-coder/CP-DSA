#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a , ll b){
	if(b==0){
		return a;
	}
	else{
		gcd(b , a%b);
	}
}

ll maxl(ll a , ll b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<ll> v;
		ll sum = 0;
		ll d;
		cin >> d;
		sum = d;
		ll m = d;
		for(int i=1;i<n;i++){
			ll x;
			cin >> x;
			sum += x;
			d = gcd(d , x);
			m = maxl(m , x);
		}
		cout<<"GCD "<<d<<"\n"<<"Sum "<<sum <<"\n";
		
		sum = sum - m;
		sum = sum/d;
		sum = sum + 1;
		cout<<sum<<"\n";
	}
return 0;
}

