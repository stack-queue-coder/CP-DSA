#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int game(int n){
	if(n == 1){
		return 0;
	}
	for(int i=1;i<n;i++){
		if(n%i == 0){
			if(game(n-i) == 0){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	cout<<game(19);
return 0;
}


