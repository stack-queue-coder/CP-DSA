#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
	int t;
	cin >> t;
 
	for(int n = 1; n<=t; n++){
		ll a1 = n*n;
		ll a2 = (a1)*(a1-1)/2;
		if(n>2){
		a2=a2-(4*(n-1)*(n-2));
		}
 
		cout << a2 << " ";	
}
}
