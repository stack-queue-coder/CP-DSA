#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int n,int m){
	if(m == 0){
		return n;
	}
	else{
		return gcd(m , n%m);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a>> b;
		int x,y;
		x = a.length();
		y = b.length();
		int lcm = (x*y)/gcd(x,y);
//		cout<<lcm<<"\n";
		string str1 = "";
		string str2 = "";
		if(a == b){
			cout<<a<<"\n";
		}
		else{
			while(str1.length() != lcm){
				str1 += a;
			}
			while(str2.length() != lcm){
				str2 += b;
			}
			if(str1 == str2){
				cout<<str1<<"\n";
			}
			else{
				cout<<"-1\n";
			}
		}
	}
return 0;
}

