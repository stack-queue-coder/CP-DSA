#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    ll t;
    cin >> t ;
    while(t--){
    	ll n;
    	cin >> n ;
    	ll a[n], count = 1, minspeed;
    	for(ll i=0;i<n;i++){
    		cin >> a[i] ;
    	}
    	minspeed=a[0];
    	for(ll i=1;i<n;i++){
    		minspeed=min(minspeed,a[i]);
    			if(minspeed>=a[i])
    				count++;	
		}
		cout << count <<"\n" ;
	}
	return 0;
}
