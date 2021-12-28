#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int y1[n][n] , y2[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> y1[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> y2[i][j];
		}
	}
	bool flag = false;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(y1[i][j] < y2[i][j] ){
				flag = true;
			}
		}
	}
	(flag ==  true) ? cout<<"NO" : cout<<"YES";
return 0;
}

