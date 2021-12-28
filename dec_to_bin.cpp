#include<bits/stdc++.h>
int dectoBin(void);
int twoCompl(void);
int main(){
	dectoBin();
	twoCompl();
	return 0;
}
int dectoBin(){
	int x,a[32];
	printf("Enter the number:\n");
	scanf("%d",&x);
	for(int i=31;i>=0;i--){
		a[i]=x%2;
		x/=2;
	}
	for(int i=0;i<32;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
int twoCompl(){
	int y,a[32];
	printf("Enter the number:\n");
	scanf("%d",&y);
	if(y<0){
		y=y*(-1)+1;
		for
	}
	for(int i=31;i>=0;i--){
		if(y%2==0){
			a[i]=1;
		}
		else{
			a[i]=0;
		}
		y/=2;
	}
	
	for(int i=0;i<32;i++){
		printf("%d",a[i]);
	}
	return 0;
}
