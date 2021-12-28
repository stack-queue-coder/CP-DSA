#include<iostream>
using namespace std;
float amt[100],payment=0,r;
int days[100]={0},n,i;
int main()
{  
    printf("ENTER THE RATE OF MILLK PER LITRE:\n");
    scanf("%f",&r);
	 
    printf("ENTER THE NUMBER OF DIFFERENT AMOUNTS OF MILK RECIEVED:\n");
    scanf("%d",&n);
	
	for(i=0;i<=n-1;i++){
	    printf("ENTER THE DIFFERENT AMOUNTS OF MILK RECIEVED:\n");
      	scanf("%f",&amt[i]);
    
	    printf("ENTER THE NUMBER OF DAYS FOR WHICH MILK RECIEVED IS %f LITRE:\n",amt[i]);
        scanf("%f",&days[i]);
        days[i]++   ;
		payment=payment+(amt[i]*r*days[i]);	
		
			}
        
printf("NUMBERS OF DAYS MILKMAN DIDNT CAME IS:",30-days[i]);
printf("THE TOTAL AMOUNT TO BE PAID TO THE MILKMAN IS: %f",payment);
return 0;
}
