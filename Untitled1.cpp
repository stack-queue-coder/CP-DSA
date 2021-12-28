#include<iostream>
using namespace std;
void insert_sort(int arr[],int n){
int i,j,key;
for(i=1;i<n;i++){
	key=arr[i];
	j=i-1;
	while(j>=0 && arr[j]>key){
		arr[j+1]=arr[j];
	    j=j-1;	
	}
    arr[j+1]=key;	
}	
}
void array(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
int main(){
	int arr[]={4,7,8,2,6};
	int n=sizeof(arr)/sizeof(arr[0]);  ;
insert_sort(arr,n);
array(arr,n);
return 0;	
}
