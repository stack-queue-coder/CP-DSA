#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int x = a+b;
			if(x < 3)
				x = 1;
			else if(x >= 3 and x<=10)
				x = 2;
			else if(x >= 11 and x<=60)
				x = 3;
			else if(x > 60)
				x = 4;
		cout<<x<<"\n";
	}
return 0;
}

