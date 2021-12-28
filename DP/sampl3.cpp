#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int zero = 1;
    int one = 1;
    
    for(int i=2;i<=n;i++){
        int prevzero = zero;
        zero = one;
        one = one + prevzero;
    }
    cout << zero + one;
    return 0;
}
