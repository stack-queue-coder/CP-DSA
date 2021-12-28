#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k; 
		cin >> n >> k;
		vector<ll> a(n);
		for(int i = 0; i < n ; i ++ ){
			cin >> a[i];
		}
		sort(a.begin() , a.end() , greater<ll>());
		ll sum = k;
		for(int i=k;i<n;i++){
			if(a[k-1] == a[i]){
				sum++;
			}
		}
		cout<<sum<<"\n";
	}
return 0;
}

