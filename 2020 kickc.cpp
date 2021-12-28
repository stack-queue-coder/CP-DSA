#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c=0;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int nxt = k;
        int res = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] == nxt){
            	nxt--;
            	if(nxt == 0){
            		res++;
            		nxt = k;
				}
			}
			else{
				nxt = k;
			}
        }
        cout<<"Case #"<<++c<<": "<<res<<"\n"; 
    }
    return 0;
}
