#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>> t ;
	while(t--){
		int w,h,n,c=1;
		cin>> w >>h >>n;
        while(w%2==0){
        	w=w/2;
        	c=c*2;
		}
		while(h%2==0){
			h=h/2;
			c=c*2;
		}
        if(c>n || c==n){
        	cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
