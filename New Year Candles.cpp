#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int a,b;
	cin >>a >> b;
	ll c =0;
	ll r=0;
	while(a>=1){
		c += a;
		r += (a%b);
		a = a/b + r/b;
		if(r/b){
			r = r%b;
		}
	}
	cout<<c;
return 0;
}

