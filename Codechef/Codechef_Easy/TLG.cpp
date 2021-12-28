#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	int a = 0 , b =0 ;
	int maxx = 0;
	int p;
	while(t--){
		int x, y;
		cin >> x >> y;
		a += x ; b += y ;
		int diff = abs(a-b);
		if(a>b){
			if(diff > maxx)p = 1;
		}
		else{
			if(diff > maxx)p=2;
		}
				maxx = max(maxx , diff);
	}
	cout<<p <<" "<<maxx;
return 0;
}

