#include<stdio.h>
int c =0;

int f(int n)
{
   static int i = 1;
   if (n >= 5)
      return n;
   n = n+i;
   i++;
   return f(n);
}
int main()
{
    printf("%d",f(1));
}
