#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	string t;
	cin >> t;
	string str = "";
	str += t;
	if(n< str.length()){
		cout<<"-1";
		return 0;
	}
	while(str.length() < n){
		str += "0";
	}
	cout<<str;
return 0;
}

