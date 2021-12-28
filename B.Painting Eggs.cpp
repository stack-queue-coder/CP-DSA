#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin  >> n;
	int A[n] , G[n];
	int sumA =0 , sumG =0;
	for(int i=0;i<n;i++){
		cin >> A[i] >>  G[i];
	}
	if(abs(sumA - sumG) > 500){
		cout<<"-1";
		return 0;
	}
	for(int i=0;i<n;i++){
		sumA += A[i];
	    if(abs(sumA - sumG) > 500){
			cout<<"G";
			sumG += G[i];
			sumA -= A[i];
		}
		else{
			cout<<"A";
		}
	}
return 0;
}

