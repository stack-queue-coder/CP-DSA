#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	set<char>st;
	for(auto it : s){
		st.insert(it);
	}
	for(int i=0;i<n;i++){
		string str;
		cin >> str;
		for(auto ele:str){
			if(st.find(ele) == st.end()){
				cout<<"No\n";
				goto end;
			}
		}
		cout<<"Yes\n";
		end: ;
	}
return 0;
}

