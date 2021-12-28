#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n >> m;
	ll a[m];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	ll c= a[0] -1;
	for(int i=1;i<m;i++){
		if(a[i] >= a[i-1]){
			c+= (a[i] - a[i-1]);
		}
		else if(a[i] < a[i-1]){
			c+=(n - (a[i-1] - a[i]));
		}
	}
	cout<<c;
return 0;
}

