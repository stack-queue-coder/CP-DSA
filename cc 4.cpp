#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ,q;
		cin >>  n >> q;
		ll a[ n];
		set<int> odd;
		set<int> even;		
		for(int i = 0 ; i< n ; i ++ ){
			cin >>  a[i];
			if(a[i] % 2 == 0){
				even.insert(a[i]);
			}
			else{
				odd.insert(a[i]);
			}
		}
		int  l ,r;
		for(int i = 0 ;i <q; i ++) {
			cin  >> l >> q;
					
		}
	}
return 0;
}

