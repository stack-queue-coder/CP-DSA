#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		int n,m,k;
		cin>> n >> m >> k;
		int a[n][m];
		int xor_arr=0;
		for(int i = 0; i < n * m; i++){
         	// Find row and column index
	        int row = i / m;
	        int col = i % m;
	 
	        // Print the element at
	        // current index
	        xor_arr = xor_arr^(k+row+col+2);
		}
		cout<<xor_arr<<"\n";
	}
	return 0;
}
