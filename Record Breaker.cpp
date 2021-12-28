#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int k = 0;
	int t;	
	cin >> t;
	while(t--){
		k++;
		int n;
		cin >> n;
		int a[n];
		for(int i =0;i<n;i++){
			cin >> a[n];
		} 
		int c = 0;
		if(n <= 2){
			c = 1;	
		}
		else{
			int m = max(a[0] , a[1]);
			for(int i=2;i<n-1;i++){
				if(a[i] > m and a[i] > a[i+1]){
					cout<<i<<" "<<a[i]<<"\n";
					c++;
				}
				m = max(a[i] , m);
			}
			if(a[n-1] > m){
				cout<<a[n-1]<<"\n";
				c++;
			}			
		}
		cout<<"Case #"<<k<<": "<<c<<"\n";
	}
return 0;
}

