#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	int ans =0;
	int bal = 0;
	for(int i=0;i<n-1;i++){
		if(s[i] == '(') {
			bal += 1;
		}
		else{
			bal -= 1;
		}
		if(bal < 0){
			bal = 0;
			ans++;
		}
	}
	cout<<ans<<"\n"; 
}


int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
return 0;
}

