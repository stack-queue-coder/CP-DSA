#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(auto ele : a){
        cout<<ele<<" ";
    }
return 0;
}

