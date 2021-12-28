#include<bits/stdc++.h>
using namespace std;

int main(){
	//declaring vector
	vector<int> v;
	//pusing elemnets to vector
	for(int i=0;i<5;i++){
		v.push_back(i);
	}
	//printing vector elements
	for(int i=0;i<5;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	//updating a vector
	v[2]=22;
	for(auto l:v){
		cout<<l<<" ";
	}
	return 0;
	
	
}
