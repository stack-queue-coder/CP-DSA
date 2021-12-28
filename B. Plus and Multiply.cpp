#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPower(ll x, ll y)
{
    // The only power of 1 is 1 itself
    if (x == 1)
        return (y == 1);
 
    // Repeatedly comput power of x
    ll pow = 1;
    while (pow < y)
        pow *= x;
 
    // Check if power of x becomes y
    return (pow == y);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,a,b;
		cin >> n >> a >>b;
		if(isPower(n , a) == 1){
			cout<<"YES\n";
		}
		else if((n-1)%b == 0){
			cout<<"YES\n";
		}
		else{
			while(n>0){
				cout<<n;
				n-=b;
				if(isPower(n , a) == 1){
					cout<<"YES\n";
					goto end;
				} 
			}
			cout<<"NO\n";
			end:;
		}
	}
return 0;
}

