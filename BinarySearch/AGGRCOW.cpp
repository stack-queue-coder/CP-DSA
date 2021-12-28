/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link : https://www.spoj.com/problems/AGGRCOW
Tag      : Binary Search 

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isPoss(int a[] , int n , int c ,int mid){
	int cow = 1 , x = a[0]; 
	for(int i=1;i<n;i++){
		if(a[i] - x >= mid){
			cow++;
			x = a[i];
		}
		if(cow == c)return true;
	}
	return false;
}


int solve(){
	int n , c;
	cin >> n >> c;
	int a[n];
	
	int min , max ;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a , a+n);
	max = a[n-1] - a[0];
	min = 1;
	int res = -1;
	while(min <= max){
		int mid = min + (max - min)/2;
		if(isPoss(a , n , c , mid) == true){
			res = mid;
			min = mid +1;
		}
		else{
			max = mid -1;
		}
	}
	return res;
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		cout<< solve() << "\n";
	}
return 0;
}

