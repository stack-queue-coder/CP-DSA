#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int a,b;
	cin >> a >> b;
	int x = (a-b)/10;
	cout<<a-b <<" "<< x <<" ";
	x = 10*x + ((a-b)%10 +1)%10 ;
	cout<<x;
return 0;
}

