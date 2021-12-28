#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		int right;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int min=a[0],max,minindex;
		for(int i=0;i<n-1;i++){
			if(min>a[i+1]){
				min=a[i+1];
				minindex=i+1;
				
			}
		}
		max=min*n;
		int minindex1;
		while(min==a[0]){
			for(int i=0;i<minindex;i++){
				if(min>a[i+1]){
					min=a[i+1];
					minindex1=i+1;
				}
			}
			max+=min*(minindex+1);
		}
	}
	return 0;
}
