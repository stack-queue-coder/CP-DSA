#include<iostream>
using namespace std;
int rec_search(int arr[],int f, int l,int x){
	if(l<f)
	return -1;
	if(arr[f]==x)
	return f;
	if(arr[l]==x)
	return l;
return rec_search(arr,f+1,l-1,x);
}
int main(){
	int arr[10],n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
}
    cin>>x;
    int index=rec_search(arr,0,n-1,x);
    if(index != -1){
    	cout<<index;
	}
	else
	cout<<"no element";
	return 0;
}
