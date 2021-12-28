#include<bits/stdc++.h>
using namespace std;
int main(){
		int n,h,x;
		cin>> n >> h >> x;
		if(x>=h){
			cout<<"YES";
			return 0;
		}
		int a[n];
		for(int i=0;i<n;i++){
			cin>> a[i];
		}
	
		for(int i=0;i<n;i++){
			if(x+a[i]>=h){
				cout<<"YES";
				return 0;
			}
		}
		cout<<"NO";
	return 0;
}
