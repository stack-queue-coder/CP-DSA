#include<stdio.h>
#include<math.h>
double fact(int);
double power(int,int);

int main(){
	//part 2
	printf("----------------part2--------------\n\n");
	int x;
	printf("Enter another value of x: \n");
	scanf("%d",&x);
	int count=0;
	printf("%f\n",exp(x));
	double sum=0;
	while(1){
		sum+=power(x,count)/fact(count);
		if(exp(x)-sum>=0.1){
			count++;
		}
		else{
			break;
		}
		
	}
	printf("%f\n",sum);
	printf("Count : %d\n",count);
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



