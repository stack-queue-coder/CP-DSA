#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t ;
	while(t--){
		string n;
		cin>> n ;
		int c=0;
		for(int i=0;i<n.length()-1;i++){
			if(n[i]=='1' and n[i+1]=='0'){
				c++;
			}
//			else if(n[i]=='0' and n[i+1]=='1'){
//				c++;
//			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
