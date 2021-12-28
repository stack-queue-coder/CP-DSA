#include<bits/stdc++.h>
#include<sstream>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>> t;
	while(t--){
		ll k;
		int d0,d1;
		cin>> k >> d0 >>d1;
		int s=d0+d1,tot=0;
		ll cycle=(k-3)/4;
		ll leftover=(k-3)%4;
		ll leftsum=0;
		int csum=(2*s)%10 + (4*s) %10 + (8*s) %10 + (6*s) %10;
			if(leftover==1){
				leftsum+=(2*s) % 10;
			}
			else if(leftover==2){
				leftsum+=(2*s) %10 + (4*s) %10; 
			}
			else if(leftover==3){
				leftsum+=(2*s)%10 + (4*s) %10 + (8*s) %10;
			}
		if(k==2){
			tot=s;	
		}
		else{
			tot= cycle*csum + leftsum +(2*s)%10;
		}	
//		cout<<cycle<<" "<<csum<<" "<<leftsum<<" "<<tot<<"\n";
		if(tot%3==0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

