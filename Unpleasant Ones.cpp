#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n];
		vector<ll> odd ,even;
		for(int i = 0 ; i <n;i++){
			cin >> a[i];
			if(a[i] & 1 !=0 ){
				odd.push_back(a[i]);
			}
			else{
				even.push_back(a[i]);
			}
		}
		for(auto ele: even){
			cout<<ele<<" ";
		}
		for(auto ele: odd){
			cout<<ele<<" ";
		}
		cout<<"\n";
	}
return 0;
}

