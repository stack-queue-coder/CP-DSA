#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n , s;
		cin >> n >> s;
		ll sum =(n*(n+1)/2 )- s ;
		if(sum >=1 and sum <=n){
			cout<<sum<<"\n";
		}
		else{
			cout<<"-1\n";
		}
	}	
return 0;
}

