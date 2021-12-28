#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int w;
	cin >> w;
	while(w--){
		ll  n;
		cin >> n;
		ll count =0;
		ll t=1;
		ll d = ll(log10(n) + 1);
		ll k=d;
		while(--d){
			t = t*10 + 1;
		}
		if(t >= n){
			count = floor(n/t) + 9*(k-1);
		}
		else{
			t=t/10;
			count = floor(n/t) + 9*(k-2);
		}
		cout << count <<"\n";
	}
return 0;
}

