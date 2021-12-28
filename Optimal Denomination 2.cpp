#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a , ll b){
	if(b==0){
		return a;
	}
	else{
		gcd(b , a%b);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n];
		ll d;
		cin >> d;
		ll sum =0;
		for(int i=1;i<n;i++){
			cin >> a[i];
			sum += a[i];
			d = gcd(d , a[i]);
		}
		cout<<"\ngcd "<<d;
		cout<<"\nsum "<<sum;
//		
//		sort(a ,a+n);
// 		sum = sum - a[n-1];
// 		sum = sum/d;
//		sum++;
//		cout<<sum<<"\n";
	}
return 0;
}


