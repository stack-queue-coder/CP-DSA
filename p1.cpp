#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >>t ;
	while(t--){
		ll r,b,d;
		cin >> r >> b >> d;
		ll mini = min(r,b);
		ll maxi = max(r,b);
		if(d+mini >= maxi){
			cout<<"YES\n";
		}
		else{
			if(mini*(1+d) >= maxi ){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
return 0;
}

