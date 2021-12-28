#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	int t;
	cin>> t ;
	while(t--){
		int n;
		cin>> n ;
		ll a[n],sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			sum=sum+a[i];
			ll need = (i*(i+1))/2; 
			if(sum<need){
				cout<<"NO\n";
				goto lol;
			}
		}
		cout<<"YES\n";
		lol: ;
	}
	return 0;
}
