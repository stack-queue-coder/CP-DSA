#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
	cout.tie(0);
	
	ll n,a[200000];
	ll x=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			x=x+a[i]-a[i+1];
			a[i+1]=a[i];
		}
	}
	cout<<x;
	return 0;
}

