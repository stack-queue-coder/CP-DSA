#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n ,q;
	cin >> n >>  q;
	int a[n] = { 0};
	for(int i =0;i<q;i++){
		int l ,r;
		cin >> l >> r;
		int x = 1 ;
		for(int j= l-1 ; j <= r-1;j++){
			a[j] += x;
			x++;
//			cout<<a[j]<<" "; 
		}
//		cout<<"\n";
	}
	for(int i =0 ;i <n ;i++){
		cout<<a[i]<<" ";
	}
return 0;
}

