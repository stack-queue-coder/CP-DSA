#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	if(sum%2!=0){
		printf("Diving the array in 2 equal sum is not possible\n");
		return 0;
	}
	int temp=0;
	for(i=0;i<n;i++){
		temp=temp+arr[i];
		if(temp==(sum/2)){
			break;
		}
	}
	printf("the required index :%d and element :%d",i,arr[i]);
	return 0;
}
