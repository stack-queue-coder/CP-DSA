#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ,d, h;
		cin >>  n >>  d >> h;
		int a[n];
		for(int i= 0 ;i <n;i++){
			cin >> a[i];
		}
		int r =0 ;
		for(int i = 0; i<n;i++){
			if(a[i] > 0){
				r += a[i];
			}
			else if(a[i] == 0){
				r -= d;
				if(r<0){
					r =0 ;
				}
			}
			
			if(r > h){
				cout<<"YES\n";
				goto end;
			}
		}
		cout<<"NO\n";
		end: ;
	}
return 0;
}

