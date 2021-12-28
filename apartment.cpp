#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	bool q=true;
	cin>> t ;
	while(t--){
		q=true ;
		cin>> n ;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				for(int k=0;k<=n;k++){
				    if((3*i + 5*j + 7*k) == n){
					 cout<< i <<" "<< j <<" "<<k <<"\n";
					 q=false;
					 goto theend;
					 
					 }
					
					}
					
				}

			}
			if(q==true){
			    cout<<"-1\n";	
			}
		   theend: ;
		}

	return 0;
}

	
