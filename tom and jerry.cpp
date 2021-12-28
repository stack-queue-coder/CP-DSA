#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d,k;
		cin >> a>> b>> c>> d>> k;
		int r = abs(a-c);
		int s = abs(b-d);
		if((r+s) > k){
			cout<<"NO\n";
		}
		else if(((r+s+k)&1)!=0){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
return 0;
}

