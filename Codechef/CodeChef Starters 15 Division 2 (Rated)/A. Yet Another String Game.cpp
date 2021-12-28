#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	string s;
	cin >> s;
	int i=0;
	string str;
	while(i<s.length()){
		if(i%2==0){
			if(s[i] == 'a'){
				str += 'b';
			}
			else{
				str += 'a';	
			}
		}		
		else{
			if(s[i] == 'z'){
				str += 'y';
			}
			else{
				str += 'z';
			}
		}
		i++;	
	}
	cout<<str<<endl;
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

