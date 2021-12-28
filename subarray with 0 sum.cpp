#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int o_sum_subarr(int a[] , int n){
	unordered_set<int> h;
	int pre_sum = 0;
	for(int i=0;i<n;i++){
		pre_sum += a[i];
		if(h.find(pre_sum) != h.end()){
			cout<<"found\n";
			return 1;
		}
		if(pre_sum == 0){
			cout<<"found\n";
			return 1;
		}
		h.insert(pre_sum);	
	}
	cout<<"not found\n";
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		o_sum_subarr(a,n);
	}
return 0;
}

