/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
	int n , m ;
	cin >> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j = 0; j< m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			int t = a[i][0];
			a[i][0] = a[i][m-1];	
			a[i][m-1] = t;
		}
		else{			
			int t = a[i][1];
			a[i][1] = a[i][m-2];
			a[i][m-2] = t;
		}
	}
	for(int i=0;i<n;i++){
		for(int j = 0; j< m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
		
	
			
return 0;
}

