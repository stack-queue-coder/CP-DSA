#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,k;
		cin >> n >> x  >> k;
		if(x%k ==0 || (n+1 - x)%k==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
return 0;
}

