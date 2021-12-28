#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int rev(int a){
	int x = a%10;
	int y = a/10;
	return 10*x +y;
}

int main(){
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
	if(rev(hh) == mm){
		hh++;	
	}
	if(rev(hh) < mm){
		hh++;
		hh=hh%24;
		if(hh == 0){
			cout<<"0"<<hh<<":"<<rev(hh)<<"0";
		}
		else if(hh < 10){
			cout<<"0"<<hh<<":"<<rev(hh);
		}
		else{
			cout<<hh<<":"<<rev(hh);
		}
		
	}
	else{
		if(rev(hh) >= 60){
			while(rev(hh) >= 60){
				hh++;
				hh = hh%24;
			}
			
			if(hh<10){
				cout<<"0"<<hh<<":"<<rev(hh);
			}
			else{
				cout<<hh<<":"<<"0"<<rev(hh);
			}
			
			
//			cout<<rev(hh)<<":"<<mm;
		}
		else{
			
			if(hh<10){
				cout<<"0"<<hh<<":"<<rev(hh);
			}
			else{
				cout<<hh<<":"<<rev(hh);
			}
			
//			cout<<hh<<":"<<rev(hh);
		}
	}
return 0;
}

