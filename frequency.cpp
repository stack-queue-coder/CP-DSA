#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		unordered_map<int , int> m;
		for(int i=0;i<n;i++){
			m[a[i]]++;
		}
		for(auto ele: m){
			cout<<ele.first<<"-->"<<ele.second<<"\n";
		}
	}
return 0;
}

