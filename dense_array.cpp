#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>> n ;
		int a[n];
		for(int i = 0; i < n ; i++){
			cin>> a[i] ;
		}
		int c=0;
		for(int i = 0; i < n-1; i++){
			int mx=max(a[i],a[i+1]);
			int mn=min(a[i],a[i+1]);
			while(mx>2*mn){
				mn=2*mn;
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}

