#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		unordered_map<char,int>u;
		string t;
		cin >> t;
		for(int i=0;i<t.length();i++){
			u[t[i]]++;
		}
		string str="";
		for(int i=0;i<2*t.length();i++){
			if(u['0']*u['1'] ==0){
				cout<<t<<"\n";
				goto end;
			}
			else{
				if(i%2 == 0)
					str += '0';
				else
					str += '1';
				
			}
		}
		cout<<str<<"\n";
		end :;
	}
return 0;
}

