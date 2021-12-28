#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr_union(int a[],int b[],int m, int n){
	unordered_set<int> h(a,a+m);
	for(int i=0;i<n;i++){
		h.insert(b[i]);
	}
	
	for(auto ele:h){
		cout<<ele<<"\n";
	}
	return h.size();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m=6;
		int n=5;
		int a[]={1,22,33,5,555,5555};
		int b[]={22,1,33,22,1};
		cout<<arr_union(a,b,m,n)<<"\n";
	}
return 0;
}

