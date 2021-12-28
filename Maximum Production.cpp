#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int d,x,y,z;
		cin >> d>> x>> y>>z;
		int w1 = 7*x;
		int w2 = d*(y) + (7-d)*z;
		cout<<max(w1,w2)<<"\n";
	}
return 0;
}

