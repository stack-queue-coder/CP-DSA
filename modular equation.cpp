#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,m;
		ll count = 0 ;
		cin >> n >> m;
		ll b = n;
		if(b>m){
			count += (((n-m)*m) + ((n-m-1)*(n-m))/2) ;
			b=m;
		}
		if(b == m){
			for(ll a=1 ; a<b ; a++){
				if(m%a == 0){
					count++;
				}
			}
			b=m-1;
		}
		if(b < m){
			vector<ll> arr(n,1);
			for(ll i=2 ;i<=b;i++){
				ll a = m%i;
				count+=arr[a];
				for(ll j = a;j<b;j+=i){
					arr[j]++;		
				}
			}
				
		}
//		if(b < m){
//			count+=(b-1);
//			for(ll i = b ; i>1 ; i--){
//				for(ll a=2;a<i;a++){
//					if((m - m%i)%a == 0){
//						count++;
//					}
//				}
//			}
//		}
		cout<<count<<"\n";
	}
return 0;
}

