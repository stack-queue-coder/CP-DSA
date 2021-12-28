#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
ll hpow(ll n)
{
	ll smaller_pow =0;
	while(n>1){
		smaller_pow++;
		n/=2;
	}
	ll res = 1;
	ll x =2;
	while(smaller_pow>0){
		if(smaller_pow & 1 !=0){
			res = res * x;
		}
		smaller_pow >>= 1;
		x *= x;	
	}
	return res;
}

void solve(){
	ll n;
	cin >> n;
	if(hpow(n) == n and n!= 1){
		cout<< n - hpow(n-1)<<"\n" ;
	}
	else{
		
		cout<<max(n - hpow(n) + 1 , hpow(n) -  hpow(hpow(n)-1)) <<"\n";	
	}

	
}

void bit(){
	int ans =16;
	for(int i=16;i<=30;i++){
		ans &= i;
	}
	cout<<ans;
}


int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

