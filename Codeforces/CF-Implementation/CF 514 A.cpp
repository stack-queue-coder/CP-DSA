#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	string s;
	cin >> s;
	string str;
	for(int i=0;i<s.length();i++){
		if(i == 0){
			if( (s[i] - '0') > 4 ){
				if((s[i] - '0') != 9){
					char c = (9 - (s[i] - '0') + '0');
			 		str += c;
			 	}
			 	else{
				 	str += s[i];
				 }
			}
			else{
				str += s[i];
			}	
		}
		else{
			if( (s[i] - '0') > 4 ){
				char c = (9 - (s[i] - '0') + '0');
		 		str += c;
			}
			else{
				str += s[i];
			}
		}
	}
	cout<<str;
	
}

int main(){
	fast
	solve();
return 0;
}

