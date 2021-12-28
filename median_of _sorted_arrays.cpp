/*
  	    eleven_121
author  memoryDestoryer
	    nine_81

Que Link :

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int findMedian(int a[], int n, int b[], int m)
    {
        int begin=0,end=n;
        
        while(begin<=end)
        {
            int i1=(begin+end)/2;
            int i2=(n+m+1)/2-i1;
            
            int min1=(i1==n) ? INT_MAX:a[i1];
            int max1=(i1==0) ? INT_MIN:a[i1-1];
            
            int min2=(i2==m) ? INT_MAX:b[i2];
            int max2=(i2==0) ? INT_MIN:b[i2-1];
            
            if((max2<=min1) && (max1<=min2))
            {
                if((n+m)%2==0)
                return ((double)max(max1,max2)+min(min1,min2))/2;
                else
                return ((double)max(max1,max2));
            }
            else if(max1>min2)
            end=i1-1;
            else
            begin=i1+1;
        }
        return 0;
    }

void solve(){
	int n , m;
	cin >> n >> m;
	int a[n] , b[m];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	
	cout<<findMedian(a ,n ,b ,m);
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

