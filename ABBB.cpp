#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> mystack;
		for(int i=0;i<s.length();i++){
			if(s[i] == 'B' and !mystack.empty()){
				mystack.pop();
			}
			else{
				mystack.push(s[i]);
			}
		}
		cout<<mystack.size()<<"\n";
	}
return 0;
}

