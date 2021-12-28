#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int a,b,c;
	cin >> a>> b>> c;
	if(a==1 and b==1 and c==1){
		cout<<a+b+c;
	}
	else if(a==1 and b==1){
		cout<<(b+a)*c;
	}
	else if(a==1 and c==1){
		cout<<a+c+b;
	}
	else if(b==1 and c==1){
		cout<<a*(b+c);
	}
	else if(a==1){
		cout<<c*(b+1);
	}
	else if(b==1){
		cout<<max((a+1)*c , a*(c+1));
	}
	else if(c==1){
		cout<<a*(b+1);
	}
	else{
		cout<<a*b*c;
	}
return 0;
}

