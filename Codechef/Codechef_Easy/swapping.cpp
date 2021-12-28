#include <stdio.h>
 
int main()
{
   int a, b ,*p1 , *p2;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &a, &b);
 
   printf("Before Swapping\nx = %d\ny = %d\n", a, b);
 
   p1 = &a;
   p2 = &b;
 
   
    *p1 = *p1 + *p2; // x now becomes 15
    *p2 = *p1 - *p2; // y becomes 10
    *p1 = *p1 - *p2; // x becomes 5
 
   printf("After Swapping\nx = %d\ny = %d\n", a, b);
 
   return 0;
}
