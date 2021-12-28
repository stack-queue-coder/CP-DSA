#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%4==0){
			cout<<"NO\n";
		}
		else{
			if(n%4 >= 2){
				cout<<"YES\n";
			}
			else{
				cout<<"NO\n";
			}
		}
	}
return 0;
}

