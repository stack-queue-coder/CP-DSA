#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin>> n >> k;
		string s;
		cin >> s;
		vector<int>v;
		int j =0;
		for(int i=0;i<s.length();i++){
			if(s[i] == '1'){
				v.push_back(i-j);
				j = i;
			}
		}
		int ans=1;
			for(auto it : v){
				if(it > k+1){
					ans++;
				}
			}
			cout<<ans<<"\n";
	}
return 0;
}

