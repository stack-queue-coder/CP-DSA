#include<bits/stdc++.h>
using namespace std;

string baset(int);
int main(){
	int n;
	cin>>n;
	cout<<baset(n);
}
string baset(int n){
 if (n == 0)
 return "";
 else
 return baset(n / 9)(n % 9);
 }
 
 
 long long findNth(long long N){
    if(N == 0){
        return N;
    }
    return (N % 9) + 10*findNth(N / 9);
    	}
