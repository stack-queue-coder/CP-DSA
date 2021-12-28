#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	int x , y , z; 
	int ansx = 0 ,ansy = 0, ansz = 0;
	while(n--){
		cin >> x >> y >> z;
		ansx += x;
		ansy += y;
		ansz += z;
	}	
	(ansx == 0 and ansy == 0 and ansz == 0) ? cout<<"YES" : cout<<"NO";
return 0;
}

