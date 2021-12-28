#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		ll a,b;
		cin >> n >> a  >> b;
		ll sa=0,an=0;
		string s;
		for(int i=0; i<n ; i++){
			cin >> s;
			if(s[0] =='E' || s[0] =='Q' || s[0] =='U' || s[0] =='I' || s[0] =='N' || s[0] =='O' || s[0] =='X'){
				sa+=a;
			}
			else{
				an+=b;
			}
		}
		if(sa>an){
			cout<<"SARTHAK\n";
		}
		else if(an>sa){
			cout <<"ANURADHA\n";
		}
		else{
			cout <<"DRAW\n";
		}
	}
return 0;
}

