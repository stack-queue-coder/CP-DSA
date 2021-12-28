#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n ;
	cin >>  n;
	ll l;
	cin >>  l;
	ll a[n] ;
	for(int i =0 ;i< n; i ++){
		cin >> a[i];
	}
	sort(a  ,a+n);
	ll d = a[1] - a[0];
	for(int i =2 ;i <n;i++){
		d = max(d , (a[i] - a[i-1]));
	}
		double f = d;
	if(a[0] != 0){
		f = max(f/2 , (a[1] - a[0]));
	}
	if(a[n-1] != l){
		f = max(f/2 , (a[n-1] - a[n-2]));
	}
	if(a[0] != 0 or a[n-1] != l){
		printf("%f",f);
		return 0;
	}
	printf("%f" , f/2);
return 0;
}

