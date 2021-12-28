#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);


int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >>  n >>  k;
		int a[n];
		int sum  = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i] > 0){
				sum += a[i];
			}
		}
		sort(a , a+n);
		for(int i = 0; i<k;i++){
			if(a[i]<0){
				sum += (-1*a[i]);
			}
			else{
				break;
			}
		}
		cout<<sum <<"\n";
	}
return 0;
}

