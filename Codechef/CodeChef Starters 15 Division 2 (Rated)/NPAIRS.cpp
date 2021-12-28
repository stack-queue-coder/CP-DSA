#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	ll ans = 0;
	for(int i= 0;i<n;i++){
		for(int j = i+1 ; j<min(n, i+9); j++){
			if(j - i == abs(s[j] - s[i])){
				ans++;
			}
		}
	}
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

