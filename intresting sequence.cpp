#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		cout<<phi(4*k + 1);
		int result = (2*k +1 -2)*(phi(4*k + 1)) + (4*k + 1); 
		cout<< result <<"\n";
	}
return 0;
}

