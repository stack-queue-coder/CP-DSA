#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007 
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	return fact(n-1)*n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout<<fact(n)<<"\n";
	}
return 0;
}

