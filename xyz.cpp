#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a , ll b){
	if(b == 0){
		return a;
	}
	else{
		return gcd(b , a%b);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll x , y; 
		cin >> x >> y;
		if(gcd(x , y ) != 1){
			cout<<"0\n";
		}
		else if((x%2 == 0 and y%2!=0) or (y%2 == 0 and x%2!=0) or (gcd(x+1 , y) != 1) or gcd(x , y+1)!=1){
			cout<<"1\n";			
		}
		else{
			cout<<"2\n";
		}
//		cout<<gcd(561194962 , 111212121212);
	}
return 0;
}

