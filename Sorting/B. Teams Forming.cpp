#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int ans = 0;
	for(int i=0;i<n;i+=2){
		ans += abs(a[i] - a[i+1]);
	}
	cout << ans <<"\n";
}

int main(){
	fast
		 solve();
return 0;
}

