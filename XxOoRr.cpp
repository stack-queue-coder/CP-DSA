#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll step(ll a  , ll b){
	if(a%b == 0){
		return (a/b);
	}
	else{
		return (a/b + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		ll a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
//		sort(a , a+n);
		ll j =0;
		unordered_map<ll,ll> u;
		for(int i=n-1;i>=0;i--){
			while(a[i] >0){
				if(a[i]&1 != 0){
					u[j]++;
				}
				j++;
				a[i] = a[i]>>1;
			}
			j = 0;
		}
		ll sum =0;
		for(auto ele : u){
			sum += step(ele.second ,k);
//			cout<<sum <<"\n";
//			cout<<ele.first<<"-------->"<<ele.second<<"\n";
		}
	cout<<sum<<"\n";
	}
return 0;
}

