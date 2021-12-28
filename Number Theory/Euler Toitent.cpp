#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int phi(int n){
	vector<int>a(n+1);
	for(int i= 0;i<=n;i++){
		a[i] = i;
	}
	for(int i=2;i<=n;i++){
		if(a[i] == i){
			a[i] = i-1;
			for(int j=2*i;j<=n;j+=i){
				a[j] *= (i-1);
				a[j] /= i;
			}
		}		
	}
	return a[n];
}


void solve(){

}

int main(){
	fast
//	int t;
//	cin >> t;
//	while(t--){
//		 solve();
//	}
	int n;
	cin >> n;
	cout<<phi(n);
return 0;
}

