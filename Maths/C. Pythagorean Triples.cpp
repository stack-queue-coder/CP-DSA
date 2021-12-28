#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n;
	cin >> n;
	
	if(n==1 or n==2){
		cout<<-1<<"\n";
		return;
	}
	if(n%2 ==0){
//		n/=2;
		ll x = (n*n)/4 +1 ;
		cout<<x <<" "<< x -2<<"\n";
//		cout<<n*n + 1 <<" "<<n*n -1 <<"\n";
	}
	else{
		ll x = (n*n - 1)/2 ;
		cout<<x << " " << x+1 <<"\n";
	}
}
	
int main(){
	fast
	solve();
return 0;
}

