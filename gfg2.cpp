#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    int incl = a[0] , excl = 0 , temp;
	    for(int i=1;i<n;i++){
	        temp = max(incl , excl);
	        incl = excl + a[i];
	        excl = temp;
	    }
	    cout<<max(incl , excl)<<"\n";
	}
}
