#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		string s,s2;
		cin>> s;
		s2="pawri";
//		int j=0;
////		for (int i = 0; i < s.length() && j < 5; i++)
//        if (s2[j] == s[i])
//            j++;
//		}
//		regex re("(party)(.*)");
		s = regex_replace(s,std::regex("party"),s2);
		cout<<s<<"\n";
	}
	return 0;
}
