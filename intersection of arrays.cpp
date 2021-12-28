#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int intersection(int a[],int b[],int m, int n){
	unordered_set<int> h(a,a+m);
	unordered_set<int> s;
	int res =0;
	for(int i=0;i<n;i++){
		if(h.find(b[i])!= h.end()){
			res++;
			s.insert(b[i]);
			h.erase(b[i]);
		}
	}
	for(auto ele:s){
		cout<<ele<<"\n";
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m=3;
		int n=5;
		int a[]={1,22,33};
		int b[]={22,1,33,22,1};
		cout<<intersection(a,b,m,n)<<"\n";
	}
return 0;
}

