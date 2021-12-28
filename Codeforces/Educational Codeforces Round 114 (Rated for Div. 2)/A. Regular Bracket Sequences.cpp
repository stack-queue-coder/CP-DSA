#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string str ;
		for(int i=1;i<=2*n;i++){
			if(i%2!=0){
				str += "(";
			}
			else{
				str += ")";
			}
		}
		cout<<str<<"\n";
		for(int i=0;i<n-1;i++){
			bool flag = true;
			string s ;
			for(int j =1 ;j<=2*n;j++){
				if(str[j-1] == ')' and flag ==  true){
					flag = false;
					continue;
				}
				if(j%2!=0){
					s += str[j-1];
				}
				else{
					s += str[j-1];
				} 
			}
//			cout<<s<<"\n";
			s += ")";
			str= s;
			cout<<s<<"\n";
		}
	}
return 0;
}

