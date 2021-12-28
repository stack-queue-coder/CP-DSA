#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	int x=1,ans=1;
	cin>>s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]){
			x++;
			if(x>ans){
				ans=x;
		    }
	    }
		else
		x=1;
				
	}

	cout<<ans;	
			
	return 0;
}
