#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		int w1,w2,x1,x2,m;
		cin>> w1 >>w2 >>x1 >>x2 >>m;
		if((w2-w1)>=x1*m && (w2-w1)<=x2*m){
			cout<<"1\n";
		}
		else{
			cout<<"0\n";
		}
	}
	return 0;
}
