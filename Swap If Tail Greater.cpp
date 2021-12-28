/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int swp(int n){
//	int y =10;
	int x=0;
	while(n){
		x = 10*x + n%10;
		n = n/10;
	}
	return x;
}

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int> > a(n);
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a[i] = {swp(x) , x};	
	}
	for(int i=0;i<n;i++){
		if(a[i].first > a[i+1].first){
			pair<int,int> temp;
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
	for(auto i: a){
		cout<<i.second<<"\n";
	}
}

int main(){
	solve();
//	cout<<swp(135);

return 0;
}

