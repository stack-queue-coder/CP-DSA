#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t;
	while(t--){
		int n,sum=0;
		cin>> n;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>> v[i];
			sum=sum+v[i];
		}
		sort(v.begin(),v.end());
		if((sum-v[n-1])>v[n-1]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
