/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , k;
	cin >> n >> k;
	string s;
	cin >> s;
	int i = (k-1)/2 + (k-1)%2;
	string str;
	if(k==1){
		cout<<s<<"\n";
		return;
	}
	bool flip = true;
	int m= k;
	
	if(k%2==0){
		int j = i-1;
		while(m--){
			if(flip){
				flip = false;
				str += s[i];
				i++;
			}
			else{
				flip = true;
				str += s[j];
				j--;
			}
		}
	}
	else{
		int j = i+1;
		while(m--){
			if(flip){
				flip = false;
				str += s[i];
				i--;
			}
			else{
				flip = true;
				str += s[j];
				j++;
			}
		}
	}
	for(int p = k;p<n;p++){
		str += s[p];
	}
	cout<<str<<"\n";
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

