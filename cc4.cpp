#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int q;
	cin >> q;
	int a[q];
	for(int i=0;i<q;i++){
		cin >> a[i];
	}
	int t;
	cin >> t;
	int x = q-1;
	
	int sum = 0;
	int pre[q];
	for(int i =0 ;i < q;i++){
		sum += a[i];
		pre[i] = sum;
	}
	for(int i =0;i<t;i++){
		int n;
		cin >> n;
		int x = sum - n;
		int y ;
		for(int j = 0;j<q;j++){
			if(x < pre[j]){
				y = j;
				break; 	
			}
		}
		if(y%2 == 0){
			cout<<"Malan\n";
		}
		else{
			cout<<"Stokes\n";
		}
	}
return 0;
}

