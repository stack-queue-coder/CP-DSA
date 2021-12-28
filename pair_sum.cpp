#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool pair_sum(int a[] , int n ,int sum){
	unordered_set<int> h;
	for(int i=0;i<n;i++){
		if(h.find(sum - a[i]) != h.end()){
			cout << a[i] <<","<<sum - a[i]<<"\n";
			return true;
		}
		else{
			h.insert(a[i]);
		}
	}
	cout<<"No such pair found\n";
	return false;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int sum;
		cin >> sum;
//		cout<<pair_sum(a,n,sum)<<"\n";
		pair_sum(a,n,sum);
	}
return 0;
}

