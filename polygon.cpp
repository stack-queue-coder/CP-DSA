#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin>> n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>> a[i];
			sum=sum+a[i];
		}
		sort(a,a+n);
		if((sum-a[n-1])>a[n-1]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
