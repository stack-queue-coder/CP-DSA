#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool desc(ll a , ll b){
	return a>b;
}

int main(){
	
		int n , q;
		cin >> n >> q;
		ll a[n];
		for(int i =0;i<n;i++){
			cin >> a[i];
		}
		sort(a , a+n , desc);
		ll x;
		int j = sqrt(n);
		for(int i = 0 ; i < q;i++){
			cin >> x ; 
			int pos = 0;
			while((pos + j) < n and a[pos + j] > x){
				pos += j;
			}			
			while(pos < n and a[pos] > x){
				pos++;
			}
			if(a[pos] == x){
				cout<<"0\n"; 
			}
			else if(pos & 1 != 0){
				cout<<"NEGATIVE\n";
			}
			else{
				cout<<"POSITIVE\n";
			}
		}
return 0;
}

