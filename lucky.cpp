#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n ;
	int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 477, 744, 747, 777};
	for(auto ele : a){
		if(n%ele == 0){
			cout<<"YES";
			return 0;			
			}
		}
		cout<<"NO";
return 0;
}

