#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin >> n;
		int s[n],p[n],v[n];
		int profit[n];
		for(int i=0;i<n;i++){
			cin >>s[i]>>p[i]>>v[i];
		}
		for(int i=0;i<n;i++){
			profit[i] = floor(p[i]/(s[i]+1))*v[i];
		}
		sort(profit,profit+n);
		cout<<profit[n-1]<<"\n";
	}
	return 0;
}
