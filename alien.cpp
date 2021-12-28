#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t,c=0;
	cin >> t;
	while(t--){
		ll g;
		cin >> g;
		ll k = 0;
		ll d  = 0;
		for(ll i=1; d<g ;i++){
			
			d = i*(i-1)/2 ;
			if(((g - d)%i) == 0) {
				if(d>=g){
					break;
				}
//				cout<<"i"<<i<<"\n";
				k++;
			} 
		}
		cout<<"Case #"<<++c<<": "<<k<<"\n";
	}
return 0;
}

