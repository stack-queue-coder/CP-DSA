#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ar[1001][1001];
void pre(){
	for(int i=1;i<=1000;i++){
		ar[i][1] = i*(i+1)/2;
		for(int j=2;j<=1000;j++){
			ar[i][j] = ar[i][j-1] + (j-1) + (i-1);
		}	
	}
}

void print(){
	for(int i=1;i<=1000;i++){
		cout<<ar[i][1]<<" ";
		for(int j=2;j<=1000;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main(){
	pre();
	int t;
	cin >> t;
	while(t--){
		ll sum = 0;
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2 ;
		for(int i=x1;i<=x2;i++){
			sum += ar[i][y1];
		}
		for(int j=y1+1;j<=y2;j++){
			sum += ar[x2][j];
		}
		cout<<sum<<"\n";
	}
return 0;
}

