#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool compare(string &s1 , string &s2){
	return s1.length() < s2.length() ;
}

int main(){
	int t;
	cin >> t;
	vector<string> str;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		str.push_back(s);
	}
	sort(str.begin(), str.end() , compare);
	for(int i=0;i<t-1;i++){
		if(str[i+1].find(str[i]) == string::npos){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"YES\n";
	for(auto ele : str){
		cout<<ele<<"\n";
	}
return 0;
}

