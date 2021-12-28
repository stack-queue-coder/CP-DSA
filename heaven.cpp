#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int l;
		string s;
		cin >> l;
		cin >> s;
		int one=0,zero=0;
		for(int i=0;i<l;i++){
			if(s[i]=='1'){
				one++;
				if(one >= zero){
					cout<<"YES\n";
					break;
				}
			}
			else if(s[i]=='0'){
				zero++;
					if(one >= zero){
						cout<<"YES\n";
						break;
					}	
			}
			
		}
		if(zero > one){
			cout<<"NO\n";
		}
	}
return 0;
}

