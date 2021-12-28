#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll c1,c2;
		if(n%3 == 0){
			c1 = c2 = n/3;
		}
		else if(n%3 == 1){
			c1 = n/3 +1;  
			c2 = n/3; 
		}
		else{
			c1 = n/3 ;  
			c2 = n/3 + 1;
		}
		cout<<c1<<" "<<c2<<"\n";
	}
return 0;
}

