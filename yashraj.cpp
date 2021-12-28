#include <stdio.h>
//Logic: ith Plant's power consumption = sum of ith row of matrix
//       jth city's total transmission  = sum of jth column of matrix
int main(void) 
{
	int m=5 ,n=4,i,j;
	int mat[5][4];
	int cities[n];
	int plants[m];
	int maxplant=0;
	int maxcity=0;
	printf("Enter the Matrix values:\n");
	//Reading input from user
	for(i=0;i<m;i++)
	{
	    plants[i]=0;
	    for(j=0;j<n;j++)
	    {
	        cities[j] = 0;
	        printf("\nEnter the energy transmitted by plant %d to city %d:",i+1,j+1);
	        scanf("%d",&mat[i][j]);
	    }
	}
	//Calculating transmisison
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        plants[i] += mat[i][j];
	        cities[j] += mat[i][j];
	    }
	}
	//Displaying plant transmission and calculating plant with highest transmission
	for(i=0;i<m;i++)
	{
	    if(plants[maxplant] < plants[i]) maxplant = i;
	    printf("\nPlant %d: %d (watts)",i+1,plants[i]);
	}
	//Displaying city transmission and calculating city with highest transmission
	for(i=0;i<n;i++)
	{
	    if(cities[maxcity]<cities[i]) maxcity = i;
	    printf("\nCity %d: %d (watts)",i+1,cities[i]);
	}
	printf("\nCity with max transmission is: City %d with %d (watts)",maxcity+1,cities[maxcity]);
	printf("\nPlant with max transmission is: Plant %d with %d (watts)",maxplant+1,plants[maxplant]);

	
}
