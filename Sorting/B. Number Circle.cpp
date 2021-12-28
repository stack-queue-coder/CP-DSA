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
	if(a[0] + a[n-2]  > a[n-1]){
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			cout<<a[i] <<" ";
		}
		return ;
	}
	cout<<"NO\n";	
}

int main(){
	fast
	solve();
return 0;
}

