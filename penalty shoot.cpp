#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	int t;
	cin>> t;
	while(t--){
		int n;
		cin >> n;
		string g;
		cin >>g;
		int a=n,b=n,as=0,bs=0;
		for(int i=0;i<2*n;i++){
			if(i%2==0){
				a--;
				if(g[i]=='1'){
					as++;
				}
				
			}
			else{
				b--;
				if(g[i]=='1'){
					bs++;
				}
			}
			if(as - bs > b){ //A wins
				cout<<i+1<<"\n";
				break;
			}
			else if(bs - as > a){  // B wins
				cout<<i+1<<"\n";
				break;
			}
			else if(a==0 and b==0){
				cout<<2*n<<"\n";
				break;
				
			}
		}
		
	}
	return 0;
}
