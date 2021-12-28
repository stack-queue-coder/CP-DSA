#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n >> m;
	int a[n];
	map<int,int> u;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a , a+n);
	for(int i=0;i<m;i++){
		int x;
		cin>> x;
		u[x]++;
	}
	int c = 0;
	for(int i=0;i<n and i<m;i++){
		for(auto ele : u){
			if(ele.first >= a[i] and ele.second > 0 ){
				c++;
				u[ele.first]--;
				break;
			}
		}
//		if(u.find(a[i]) != u.end()){
//			c++;
//			u.erase(a[i]);
//		}
	}
	cout<<n-c;
return 0;
}

