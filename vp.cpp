/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int lcm(int a,int b){
	return (a*b)/__gcd(a,b);
}

void solve(){
	int n;
	cin >> n;
	int ans =2;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			ans = lcm(ans , i);
		}
	}
	if(n==1 || ans > 10000000){
		cout<<"No such number in range";
	}
	else{
		cout<<ans;
	}
	
//	int ans = 2;
//	for(int i=4;i<=n;i+=2){
//		ans = (ans*i)/__gcd(ans , i);
//	}
//	if(ans>10000000 or n==1){
//		cout<<"No such number in range\n";
//	}
//	else if(n<4){
//		cout<<2<<"\n";
//	}
//	else{
//		cout<<ans<<"\n";
//	}
}

int main(){
	solve();
return 0;
}

