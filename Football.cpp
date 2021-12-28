#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin >> n;
	map<string , int> ump;
	while(n--){
		string s;
		cin >> s;
		ump[s]++;
	}
	int max = 0;
	string ans;
	for(auto ele:ump){
		if(ele.second > max){
			max = ele.second;
			ans = ele.first;
		}
	}
	cout<<ans;

	
return 0;
}

