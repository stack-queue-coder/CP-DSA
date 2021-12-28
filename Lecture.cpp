#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n>> m;
	unordered_map<string , string> box ;
	for(int i=0;i<m;i++){
		string a,b;
		cin >> a >> b;
		box[a]  = b;
	}
	string str;
	for(int i=0;i<n;i++){
		string s;
		cin>> s;
		if(s.length() > box[s].length()){
			str += box[s];
		}
		else{
			str += s;
		}
		str += " ";
	}
	cout<<str;
return 0;
}

