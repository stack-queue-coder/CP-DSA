#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
 
//function to swap addresses
void swap(int *a, int *b)
{
    int temp = *a;
    *a   = *b;
    *b   = temp;
}
//In this function we move non-postive elements to the start of the array
//return the start index of start index of postive array
int positive_array(int array[], int N)
{
    int start_index = 0, i;
    for(i = 0; i < N; i++)
    {
       if (array[i] <= 0)  
       {
           swap(&array[i], &array[start_index]);
           start_index++;  // increment count of non-positive integers
       }
    }
    return start_index;
}
//In the given array this function finds the smallest missing number
//N is size of the array
//we mark the elements by making the elements at the postion(i-1)to negitive
//after modifying the array we find index at which we find first postive(j) and j+1 is the missing number.
int FindMissingPostive(int array[], int N)
{
  for(int i = 0; i < N; i++)
  {
    if(abs(array[i]) < N+1 && array[abs(array[i]) - 1] > 0)
    {
      array[abs(array[i]) - 1] = -array[abs(array[i]) - 1];
    }
  }
  for(int k = 0; k < N; k++){
    if (array[k] > 0)
    {
      return k+1;
    }
  }
  return N+1;
}
//insted of finding the missing postive integer in whole array
//we can find in postive part of the array fast.
int FindMissing(int array[], int N)
{
   int start = positive_array(array,N);
 
   return FindMissingPostive(array+start,N-start);
}
//main function to test above functions 
int main()
{
 int n;
 cin>>n;
 int input_array[n];
 for(int i=0;i<n;i++){
  cin>>input_array[i];
 }
  int N = n;//size of the array
 
 cout<<FindMissing(input_array,N);
  return 0;
}
