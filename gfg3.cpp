#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int len(int n){
    int t = 0;
    while(n){
        t++;
        n = n>>1;
    }
    return t;
}

int main(){
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
        if(n & 1 != 0){
            int k = len(n)/2;
            k++;
            n = n^(1 << k);
        }
        else{
            int k = len(n) / 2;
             n = n^(1 << k);
             k++;
             n = n^(1 << k);
        }
        cout<<n<<"\n";
	}
return 0;
}

