//pointers in  c++

#include<iostream>

using namespace std;
int main(){
	int var=5;
	
	int *ip;
	int *dp;
	float *fp;
	char *cp;
	
	ip=&var;
	cout<<"variable value:"<<var<<endl;
	cout<<"pointer pointing to address:"<<ip<<endl;
	cout<<"value stored at address:"<<*ip<<endl;
	
	*ip=6;
	cout<<"variable value:"<<var<<endl;
	cout<<"pointer pointing to address:"<<ip<<endl;
	cout<<"value stored at address:"<<*ip<<endl;
	
	dp=&var;
	*dp=55;
	cout<<"variable value:"<<var<<endl;
	cout<<"pointer pointing to address:"<<dp<<endl;
	cout<<"value stored at address:"<<*dp<<endl;
	
	
	
	return 0;
}
