#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		unordered_set<int> s;
		int n;
		cin >> n;
		int key;
		for(int i=0;i<n;i++){
			cin>>key;
			s.insert(key);
		}
		cout<<s.size();
	}
return 0;
}

