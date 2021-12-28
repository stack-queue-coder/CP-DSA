#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;
		bool flag = false;
		if((a+b <= d) && (c<=e)){
			flag = true;
		}
		else if((c+b <= d) && (a<=e)){
			flag = true;
		}
		else if((a+c <= d) && (b<=e)){
			flag = true;
		}
		(flag==true)?cout<<"YES\n":cout<<"NO\n";

	}
return 0;
}

