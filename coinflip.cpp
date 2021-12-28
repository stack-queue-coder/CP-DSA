#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin >>g;
		for(int j=0;j<g;j++){
			int i,n,q;
			cin >>i >>n >>q;
			int same,not_same;
			// i=1--------->head   i=2---------->tail
			// q=1---------->head  q=2--------->tail
			if(n%2==0){ //i----->head
				// n/2---->head
				same=n/2;
				not_same=n/2;
			}
			else{
				same=(n-1)/2;
				not_same=(n+1)/2;
			}
			if(q==i){
				cout<<same<<"\n";
			}
			else{
				cout<<not_same<<"\n";
			}
		}
	}
	return 0;
}
