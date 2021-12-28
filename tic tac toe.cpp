#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		char a[3][3];
		int xtot=0,otot=0,_tot;
		int xwin = 0, owin =0 ;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin >> a[i][j];
				if(a[i][j] == 'X')
					xtot++;
				else if(a[i][j] == 'O')
					otot++;	
			}
		}
		_tot = 9 - (xtot + otot);
		// row same
		for(int i=0;i<3;i++){
			if((a[i][0] == a[i][1]) && (a[i][2] == a[i][1])){
				if(a[i][0] == 'X'){
					xwin++;
				}
				else if(a[i][0] == 'O'){
					owin++;	
				}
			}
		}
//		cout<<"xwin--->"<<xwin<<endl;
//		cout<<"owin--->"<<owin<<endl;
			
		// column same
			for(int j=0;j<3;j++){
				if((a[0][j] == a[1][j]) && (a[1][j] == a[2][j])){
					if(a[0][j] == 'X'){
						xwin++;
					}
					else if(a[0][j] == 'O'){
						owin++;
					}
				}
			}
//		cout<<"xwin--->"<<xwin<<endl;
//		cout<<"owin--->"<<owin<<endl;
			
		// left diagonal
		if(a[0][0] == a[1][1] && a[1][1] == a[2][2]){
			if(a[0][0] == 'X'){
				xwin++;
			}
			else if(a[0][0] == 'O'){
				owin++;
			}
		}
//			cout<<"xwin--->"<<xwin<<endl;
//		cout<<"owin--->"<<owin<<endl;
			
		// right diagonal
		if(a[0][2] == a[1][1] && a[1][1] == a[2][0]){
			if(a[1][1] == 'X'){
				xwin++;
			}
			else if(a[1][1] == 'O'){
				owin++;	
			}
		}
		
		// unreachable	
		if(xwin ==1 && owin == 1)
			cout<<"3\n";
		else if(otot > xtot)
			cout<<"3\n";
		else if((xtot - otot) > 1)
			cout<<"3\n";
			
		// win and draw		
		else if((xwin ==1 && owin ==0) && (xtot-otot) ==1 )
			cout<<"1\n";
		else if((xwin ==0 && owin ==1) && (xtot == otot))
			cout<<"1\n";
		else if(_tot == 0 && xwin ==0 && owin == 0)
			cout<<"1\n";
		else if(xwin == 2 && owin == 0)
			cout<<"1\n";
		// more moves needed	
		else if(_tot !=0 && xwin==0 && owin==0)
			cout<<"2\n";
		
		else cout<<"3\n";
//				cout<<"xwin--->"<<xwin<<endl;
//		cout<<"owin--->"<<owin<<endl;
//		cout<<"xtot--->"<<xtot<<endl;
//		cout<<"otot--->"<<otot<<endl;
//		cout<<"_tot--->"<<_tot<<endl;	
	}
return 0;
}

