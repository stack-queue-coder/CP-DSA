#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		cout<< (ceil(c/a) + ceil(d/b))<<"\n";
	}
return 0;
}

