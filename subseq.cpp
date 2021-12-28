#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve(const string &s1,const string &s2 ,int m , int n){
	
	if(n == 0){
		return true;
	}
	if(m == 0){
		return false;
	}
	if(s1[m-1] == s2[n-1]){
		return solve(s1,s2,m-1,n-1);
	}
	else{
		return solve(s1,s2,m-1,n);
	}
}
//
//bool solve(string s1, string s2){
//	int j=0;
//	for(int i=0;i<s1.length() && j<s2.length();i++){
//		if(s1[i] == s2[j]){
//			j++;
//		}
//	}
//	return (j == s2.length());
//}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1>> s2;
		cout<<solve(s1,s2,s1.length() , s2.length());
	}
return 0;
}

