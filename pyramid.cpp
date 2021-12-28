#include<bits/stdc++.h>
using namespace std;


void pattern1(int n){
	for(int i =0 ;i < n; i ++ ){
		for(int j = n; j>=n/2;j--){
	//		   000010000
	//		   000101000
	//		   001010100
	//		   010101010
	//		   101010101
			cout<<"0";
			
		}
		cout<<"\n";
	}
}
int main(){
	pattern1(5);
	return 0;
}
