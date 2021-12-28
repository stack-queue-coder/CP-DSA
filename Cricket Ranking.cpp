#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int r1 ,c1, w1 ,r2,c2 ,w2;
		int a = 0 ,b =0;
		cin >> r1  >> w1 >> c1  >>r2 >> w2 >>c2;
		(r1 > r2) ? a++ : b++;
		(c1 > c2) ? a++ : b++;
		(w1 > w2) ? a++ : b++;
		
		(a>b) ? cout<<"A\n" : cout<<"B\n";
	}
return 0;
}

