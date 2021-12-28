#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t ;
	while(t--){
		ll n;
		cin >> n ;
		ll a[n],p[n],b[n];
		ll sum=0;
		for(ll i=0;i<n;i++){
			cin >> a[i] ;
			sum+=a[i];
			p[i]=max<ll>(0,(a[i]/2 -1));
			b[i]=pow(a[i],p[i]);
		}
		if(sum%2==0){
			cout<<"0\n";
		}
		else if(sum%2!=0){
			ll count=0;
			for(ll i=0;i<n;i++){
				if(abs(b[i]-a[i])%2!=0){
					count++;
				}
			}
			if(count==0){
				cout<<"-1\n"; 
			}
			else{
				cout<<count<<"\n";
			}
		}		
	}
	return 0;
}
