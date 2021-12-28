#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t ;
	while(t--){
		ll a,y,x;
		cin>> a >> y >> x;
		ll c,count=0;
		for(ll i=1;i<=a;i++){
			if(i+y > a){
				count++;
			}
		}
		if(y>a){
			c=count*x + 1;
		}
		cout<<c<<"\n";
	}
	return 0;
}
