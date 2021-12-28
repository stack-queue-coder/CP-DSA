#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x1,x2,x3,y1,y2,y3;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		int d;
		if(y1==y2 and y2==y3){
			if(x3>min(x1,x2)and x3<max(x2,x1)){
				d = abs(x2-x1)+2;
			}
			else{
				d = abs(x2-x1);
			}
			
		}
		else if(x1==x2 and x2==x3){
			if(y3>min(y1,y2) and y3<max(y2,y1)){
				d = abs(y2-y1)+2;
			}
			else{
				d = abs(y2-y1);
			}

		}
		else{
			d = abs(y2-y1)+ abs(x2-x1);
		}
		cout<<d<<"\n";
	}
return 0;
}

