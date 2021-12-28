#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);   
    int t;
    cin >> t ;
    while(t--){
    	string s;
    	cin >> s;
    	int x=s.length();
    	int l[26]={0};
    	int r[26]={0};
		for(int i=0;i<=x/2;i++){
    		l[s[i]-'a']++;
    	}
    	for(int i=(x+1)/2; i<x; i++){
    		r[s[i]-'a']++;
		}
		for(int i=0; i<x; i++){
			if(l[i]!=r[i]){
				cout<<"NO\n";
				goto no;
			}
		}
		cout<<"YES\n";
		no: ;
    }
    return 0;
}
