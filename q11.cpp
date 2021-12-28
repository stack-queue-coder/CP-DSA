#include <bits/stdc++.h>
using namespace std;
double E=0.000001;

double fn(double x){

	return cos(x)-x*exp(x);
	
}
double fdash(double x){
	return -sin(x)-x*exp(x)-exp(x);
}
void newton(){
	double x0;
	cout<<"Enter x0 \n";
	cin>>x0;
	cout<<"Enter Error tolerance\n";
	cin>>E;
	int itr;
	cout<<"Enter no of iterations\n";
	cin>>itr;

	double x1;
	while(true){
		if(itr==0) break;
		itr--;

		double fx = fn(x0);
		double fdashx = fdash(x0);
		if(fdashx==0){
			cout<<"Method Failed\n";
			break;
		}
		x1=x0 - fn(x0)/fdash(x0);

		if(fn(x1)==0 || fabs(fn(x1))<E){
			break;
		}
		x0 =x1;
	} 
	cout.precision(8); 
	cout<<x1<<endl;
}
int main() {
	
	 newton();
}
