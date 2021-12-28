#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll p,a,b,c;
		cin>> p >> a >> b >> c ;
		if(p%a==0 or p%b==0 or p%c==0)cout<<"0\n";
//		else if(a==1 or b==1 or c==1){
//			cout<<"0"<<"\n";
//		}
		else{
		cout<<min(a-(p%a),min(b-(p%b),c-(p%c)))<<"\n";
	}
}
	return 0;
}
