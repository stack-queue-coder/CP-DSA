#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int rev(int);
int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin>> n;
		cout<<rev(n)<<"\n";	
	}
	return 0;
}
int rev(int n){
	int rn=0;
	while(n>0){
		int r=n%10;
		rn=10*rn + r;
		n=n/10;
	}
	return rn;
}
