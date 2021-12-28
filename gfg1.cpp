#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin>> n;
	    int sum = 0;
	    int m ,d , a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        sum += a[i];
	    }
	    sort(a,a+n);
	    bool flag = false;
	    for(int i=0;i<n-1;i++){
	        if(a[i] == a[i+1]){
	            d = a[i];
	        }
	        if(a[i] != i+1){
	            if(flag ==  false){
	                m = i+1;
	                flag = true;
	            }
	        }
	    }
	    cout<<d<<" "<<m<<"\n";
	}
	return 0;
}
