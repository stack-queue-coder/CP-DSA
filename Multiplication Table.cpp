#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	ll x;
	cin >> x;
	ll ans=0;
	for(int i=1;i<=n;i++){
		if(x%i==0 and (x/i)<=n){
			ans++;
		}
	}
//	for(ll i=1;i*i<=x and i<=n;i++){
//		if(i*i==x){
//			ans++;
//		}
//		else if(x%i==0 and (x/i)<=n){
//			ans+=2;
//		}
//	}
	cout<<ans;
return 0;
}

