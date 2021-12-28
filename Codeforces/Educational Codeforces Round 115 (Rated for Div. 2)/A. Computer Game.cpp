#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	string s1,s2;
	cin >> s1 >> s2;
	for(int i=0;i<n;i++){
		if(s1[i] == s2[i] and s1[i] == '1'){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
//	vector<int> a(n),b(n);
//	for(int i=0;i<n;i++)cin >> a[i];
//	for(int i=0;i<n;i++)cin >> b[i];
//	for(int i=0;i<n;i++){
//		if(a[i] & b[i] == 1){
//			cout<<"NO\n";
//			return;
//		}
//	}
//	cout<<"YES\n";
//	string s1,s2;
//	cin >> s1 >> s2;
//	ll p = (ll) bitset<64>(s1).to_ulong();
//	ll q = (ll) bitset<64>(s2).to_ulong();
//	( (p&q) != 0 )? cout<<"NO\n" : cout<<"YES\n";
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

