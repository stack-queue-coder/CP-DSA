#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >>t;
	while(t--){
		ll k;
		int d0,d1;
		cin >> k >> d0 >> d1;
		int s=d0+d1, tot=0;
		if(k==2){
			tot = s; 
		}
		else if(k==3){
			tot = s + s%10;
		}
		// k > 3
		else{
			int leftsum=0;
			int cyclesum = (2*s) % 10 + (4*s) % 10 + (8*s) % 10 + (6*s) % 10 ;
			ll numofcycle = (k-3)/4;
			ll leftcycle = (k-3) %4 ;
			if(leftcycle==1){ leftsum= (2*s) % 10 ;
			}
			else if(leftcycle == 2){ leftsum= (2*s) % 10 + (4*s) % 10;
			}
			else if(leftcycle == 3){ leftsum=(2*s) % 10 + (4*s) % 10 + (8*s) % 10;
			}
			tot = numofcycle * cyclesum + leftsum + s + s%10 ;
		}
		if(tot%3==0){
			cout <<"YES\n";
		}
		else{ cout <<"NO\n";
		}
	}
	return 0;
}
