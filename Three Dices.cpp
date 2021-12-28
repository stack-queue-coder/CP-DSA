#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x , y;
		cin >> x >> y;
		float d = 6 - x - y;
		(d >= 0) ? cout<<d/6<<"\n" : cout<<"0\n";
	}
return 0;
}

