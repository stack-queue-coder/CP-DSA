#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>> n;
		int k=0;
	while(n--){
	int c=0;
		for(int i=0;i<3;i++){
			int a[i];
			cin>>a[i];
			if(a[i]==1){
				c++;
			}
		}
		if(c>1){
			k++;
		}
		
	}
	cout<<k;
	return 0;
}
