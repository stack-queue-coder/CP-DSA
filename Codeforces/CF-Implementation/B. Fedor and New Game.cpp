#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int cbit(int n , int a){
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(a&1 != 0){
			cnt++;
		}
		a >>=1;
		if(a == 0){
			break;
		}
	}
	return cnt;
}

void solve(){
	int n , m , k;
	cin >> n >>  m >> k;
	int a[m+1];
	for(int i=0;i<=m;i++){
		cin >> a[i];
	}
	int x = a[m];
	int sum = 0;
	for(int i=0;i<m;i++){
		if(cbit(n , x^a[i]) <= k )sum++;
	}
	cout<<sum;
}	

int main(){
	fast
	solve();
return 0;
}

