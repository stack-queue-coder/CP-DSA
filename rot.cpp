#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
int main(){
	int n;
	cin >> n;
		ll a[n];
		ll sum = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum=(sum+a[i]+MOD)%MOD;
		}
		int q;
		cin >> q;
		int qi[q];
		for(int i=0;i<q;i++){
			cin >> qi[i];
		}
		for(int i=0;i<q;i++){
			sum=(2*sum)%MOD;
			cout <<sum<<"\n";
		}
		
return 0;
}

