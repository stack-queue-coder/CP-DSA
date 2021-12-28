#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , k;
		cin >> n >> k;
		string s;
		cin >> s;
		int j =0;
		for(int i =1 ;i<s.length();i++){
			if(s[i]!=s[i-1]){
				j++;
			}
		}
		if(j<k){
			cout<<"-1\n";
		}
		else{
			for(int i=n-1;i>=0;i--){
				if(k%2==0 and s[i]==s[0]){
					cout<<i+1<<"\n";
				}
				else if(k%2!=0 and s[i]!=s[0]){
					cout<<i+1<<"\n";
				}
			}
		}
	}
return 0;
}

