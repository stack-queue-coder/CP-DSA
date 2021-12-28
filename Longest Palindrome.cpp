#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,m;
	cin >> n >> m;
	string s[n];
	set<string> box;
	for(int i=0;i<n;i++){
		cin >> s[i];
		box.insert(s[i]);
	}
	string mid;
	vector<string> l,r;
	for(int i=0;i<n;i++){
		string temp  = s[i];
		reverse(temp.begin() , temp.end());
		if(temp == s[i]){
			mid = temp;
		}
		else if(box.find(temp) != box.end()){
			l.push_back(s[i]);
			r.push_back(temp);
			box.erase(s[i]);
			box.erase(temp);
		}
	}
	cout<<2*l.size()*m + mid.length()<<"\n";
	for(auto ele : l){
		cout<<ele;
	}
	cout<<mid;
	reverse(r.begin() ,  r.end());
	for(auto ele : r){
		cout<<ele;
	}
return 0;
}

