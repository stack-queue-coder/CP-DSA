#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1);
	if(n%2==0){
		cout<<a[n/2];
	}
	else{
		cout<<a[n/2+1];
	}
}

int main(){
	fast
	solve();
return 0;
}

