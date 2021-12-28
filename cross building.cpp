#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m;
	cin >> n >> m;
	ll a[n];
	for(ll i=0; i<n;i++){
		cin >> a[i];
	}
	ll cnt =1 ;
	ll r=0;
	for(ll i = 0 ; i<n;i++){
		if(a[i] != a[i+1]){
			ll d = a[i+1]-a[i];
			if(d>0){
				if(r>d){
					r = r - d;
					cnt++;
				}
				else if(r<=d){
					r=0;
					m = m - (d-r);
					if(m<0){
						cout<<"NO\n";
						break;
					}
					cnt++;
				}
			} 
			else if(d<0){
				r = (-1)*d;
				cnt++;
			}
		}
		else if(a[i] == a[i+1]){
			cnt++;
		}
	}
	if(cnt == n){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
return 0;
}

