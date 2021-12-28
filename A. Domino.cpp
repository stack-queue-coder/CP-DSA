#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int sumx = 0 , sumy = 0;
	int t =0;
	for(int i=0;i<n;i++){
		int x,y; cin >> x >> y;
		if(x%2 != y%2){t = 1;}
		sumx += x;
		sumy += y;
	}
	if(sumx%2 == 0 and sumy%2==0)cout << "0";
	else if(sumx%2!=sumy%2)cout<<"-1";
	else if(t){cout<<"1";}
	else cout<<"-1";
	
return 0;
}

