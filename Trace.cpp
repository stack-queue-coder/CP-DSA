#include<bits/stdc++.h>
using namespace std;
typedef long double ll; 
int main(){
	int n;
	cin >> n;
	ll a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n);
	ll area = 0;
	int k=1;
	for(int i = n-1;i>=0;i--){
		area += k*(a[i]*a[i]);
		k=-k;
	}
	area = area*3.14159;
	cout<<area;
return 0;
}

