#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	ll a[n];
	int ans;
	int b[n];
	b[0] = 1;
	b[1] = 2;
	if(n==1 or n==2){
		cout<<n;
		return 0;
	}
	int cur=0 ,  prev = 0;
	cin >> a[0] >> a[1];
	for(int i=2;i<n;i++){
		cin >> a[i];
		if(a[i] == (a[i-1] + a[i-2])){
			b[i] = b[i-1] + 1;
			continue;
		}
		b[i] = 2;
	}
	sort(b , b+n);
	cout<<b[n-1];
	
return 0;
}

