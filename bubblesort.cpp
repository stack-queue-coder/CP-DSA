#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void bubble_sort(int a[],5){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void print(int a[]){
	for(auto ele : a){
		cout<<ele<<" ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a[] = {4, 5 ,1 , 55, 0};
		bubble_sort(a,5);
		print(a);
	}
return 0;
}

