#include<iostream>
using namespace std;
int days[100],amt[100],i,payment=0,r,n;
int main()
{  
    printf("ENTER THE RATE OF MILLK PER LITRE:\n");
    scanf("%d",&r);
	 
    printf("ENTER THE NUMBER OF DIFFERENT AMOUNTS OF MILK RECIEVED:\n");
    scanf("%d",&n);
	
	for(i=0;i<n;i++){
	    printf("ENTER THE DIFFERENT AMOUNTS OF MILK RECIEVED:\n");
      	scanf("%d",&amt[i]);
      }
        printf("ENTER THE NUMBER OF DAYS FOR WHICH MILK RECIEVED IS :\n");
        scanf("%d",days[i]);
    
    payment=(amt[i]*days[i]*r)+payment;

printf("THE TOTAL AMOUNT TO BE PAID TO THE MILKMAN IS:",payment);
return 0;
}
