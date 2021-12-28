#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,c=1;
	float y=1,t=1; //t=initial term, y=real value
	double z; //double variable for storing original value of e^x
	printf("\n\n\tFINDING THE NO. OF TERMS ADDED for e^x USING TAYLOR SERIES TO GET A ERROR LESS THAN 0.1!)\n\t-----------------------------------------------------------------------------------------\n\nEnter the x:");
	scanf("%d",&x);
	z=exp(x);
	for(i=1;c==1;i++) //no. of term condition in loop
	{
		t=t*x/i;
		y=y+t;
		if((z-y)<=0.1)
		{
			c=0; //if the difference is less than or equal to 0.1, then loop terminates
		}
	}
	printf("\nNumber of terms added was %d\t (The value of e^x is %f)\n\n",i,y); 
	return 0;
}
