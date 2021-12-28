#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int sum = 0;
		for(int i =1;i<=n;i++){
			sum += (n/__gcd(i,n));
		}	
		cout<<sum<<"\n";
	}
return 0;
}

