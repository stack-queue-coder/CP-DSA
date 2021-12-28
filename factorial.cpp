#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		ll n;
		cin>> n;
		ll mul5=0;
		for(int i=5;i<=n;i*=5){
			mul5+=n/i;
			
		}
			cout<<mul5<<"\n";
	
	}
	return 0;
}
