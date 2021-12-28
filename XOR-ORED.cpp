#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >>  n;
		ll a[n];
		for(int i =0 ; i < n ; i ++ ){
			cin >> a[i];
		}
		ll x = 0;
		sort(a , a+n);
		ll d = a[n-1];
		int  p = 0;
		while(d>0){
			p++;
			d = d>>1;
		}
		
		for(int i =0 ;i <p;i++){
			int count = 0;
			for(int j = 0; j<n;j++){
				if(a[j] & (1 << i)) {
                	count++;
            	}
			}
			if(count == n){
				x += 1<<i;
			}	
		}
		ll sum = 0;
		for(int i =0 ;i<n;i++){
			sum |= (x ^ a[i]);
		}
		cout<<x<<" "<<sum<<"\n";
	}
return 0;
}

