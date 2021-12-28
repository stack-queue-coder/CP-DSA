#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		unordered_map<int,int> mp;
		for(int i=0;i<2*n;i++){
			int x;
			cin >> x;
			mp[x%2]++;
		}
		if(mp[1] == n or mp[1] == mp[0]){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
return 0;
}

