#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	stack<char> st;
	for(int i=0;i<n;i++){
		if(s[i] == '.')continue;
		if(!st.empty()){
			if(s[i] == 'H'){
				cout<<"Invalid\n";
				return;	
			}
			else{
				st.pop();
			}
		}
		else if(s[i] == 'T'){
			cout<<"Invalid\n";
			return;
		}
		else{
			st.push(s[i]);
		}
	}
	cout<< (st.empty() ? "Valid\n" : "Invalid\n" );
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

