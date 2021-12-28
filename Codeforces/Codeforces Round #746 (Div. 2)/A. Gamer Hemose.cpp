#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , h;
	cin >> n >> h;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a , a+n);
	int ans =0 ;
	ans += 2*(h/(a[n-1] + a[n-2])); 
//	cout<<ans<<"\n";
	int rem = h % (a[n-1] + a[n-2]);
//	cout<<rem<<"\n";
	if(rem > a[n-1])ans+=2;
	else if(rem != 0)ans++;
	cout<<ans<<"\n";
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

