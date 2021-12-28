#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		int f[26] = {0};
		for(int i=0;i<str.length();i++){
			f[(str[i] - 'a')]++;
		}
		for(int i = 0;i<26;i++){
			if(f[i] > 0)
				cout<<char(i + 'a')<<"  "<<f[i]<<"\n";
		}
	}
return 0;
}

