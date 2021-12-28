#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ,k ;
		cin >> n >> k;
		int len = n-1;
		
		string s;
		cin >> s;
		for(int i =1;i<n;i++){
			if(s[i] == s[i-1]){
				len++;
			}
		}
		for(int i = 0 ;i<k;i++){
			int q;
			cin >> q; q--;
			
			if(s[q] == '1'){
				s[q] = '0';
			}
			else{
				s[q] = '1';
			}
			if(q>0){
				if(s[q] == s[q-1]){
					len++;
				}
				else{
					len--;
				}
			}
			
			if(q<n-1){
				if(s[q] == s[q+1]){
					len++;
				}
				else{
					len--;
				}
			}
			
			cout<<len<<"\n";
		}
	}
return 0;
}

