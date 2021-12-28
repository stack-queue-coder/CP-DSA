#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k ;
		cin >> n >>  k;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a , a+n);
		ll sum = 0;
		while(k--){
			sum += a[k];
		}
		cout<<sum<<"\n";
	}
return 0;
}

