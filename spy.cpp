#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		unordered_map<int,int> um;
		for(int i=0;i<n;i++){
			cin >> a[i];
			um[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(um[a[i]] == 1){
				cout<<i+1<<"\n";
				break;
			}
		}
	}
return 0;
}

