#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		if(n==1 || n==2){
			cout<<"YES\n";
			goto done;
		}
		else{
			for(int i=0;i<n-1;i++){
				if(s[i] != s[i+1]){
					for(int j=i+1;j<n;j++){
						if(s[i] == s[j]){
							cout<<"NO\n";
							goto done ;
						}
					}
				}
			}
		}
		cout<<"YES\n";
		done : ;
	}
return 0;
}

