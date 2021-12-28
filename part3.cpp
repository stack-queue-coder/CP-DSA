#include<stdio.h>
#include<math.h>
#include<complex.h>
double fact(int);
double power(int,int);
int main(){
	//part 1
	printf("----------------part1--------------\n\n");
	int x;
	//printf("Enter the value of x:\n");
	//scanf("%d",&x);
	
	double sum=0;
	for(int i=0;i<10;i++){
		sum+=power(I*M_PI,i)/fact(i);
	}
	
	return 0;
}
double fact(int a){
	if(a==0 || a==1){
		return 1;
	}
	else{
		return a*fact(a-1);
	}
}
double power(int a,int b){
	int ans=1;
	if(b==0){
		return 1;
	}
	else{
	while(b--){
		ans=ans*a;
	}
	return ans;
   }
}


