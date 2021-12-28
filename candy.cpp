#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int a[n];
	int l2r[n];
	int r2l[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		l2r[i] =1 ;
		r2l[i] =1;
	}
	int i=0,j=n-1;
	int tot=0;
	for(int i=0;i<n-1;i++){
		if(a[i+1] > a[i]){
			l2r[i+1] = l2r[i] + 1;
		}
	}
	for(int j=n-1;j>0;j--){
		if(a[j-1] > a[j]){
			r2l[j-1] = r2l[j] + 1;
		}
	}
	for(int i=0;i<n;i++){
		tot += max(l2r[i] , r2l[i]);
	}
	cout<<tot<<"\n";
return 0;
}

