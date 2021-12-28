#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int x=100 & 1;// checks even or odd

	x=100<<2; //multiplies 100 with pow(2,2);
	x= 100>>2; //divides 100 with pow(2,2);
////	x=100&;
//int c=0;
//	for(int i=0;i<=100;i++){
//		if((i&1) == 0){
//			cout<<i<<"\n";
//			c++;
//		}
//		
//	}
//	cout<<c;
//	
	int y=1<<1;
//	cout<<y;
for (int k = 31; k >= 0; k--) {
if (x&(1<<k)) cout << "1";
else cout << "0";
}
	return 0;
}
