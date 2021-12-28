#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int m , n ; 	
	cin >>  m >> n;
	int a[m][n];
	int sum = 0 ,ans = 0;
	int index;
	for(int i=0;i<m;i++){
		for(int j =0 ;j<n;j++){
			cin >> a[i][j];
			sum += a[i][j];
		}
		if(sum > ans){
			index = i;
		}
		ans = max(sum , ans);
		sum = 0;
	}
	
	cout<<index<<" "<<ans;
return 0;
}




//10 230 90 30
//130 0 30 400
//790 0 0 650
//30 400 150 0
//50 300 0 20
