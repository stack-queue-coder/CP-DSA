#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

long a[1000001];
bool flag = true;
void phi(){
    for(long i=1;i<=1000000;i++){
        a[i] = i;
    }
    for(long i=2;i<=1000000;i++){
        if(a[i] == i){
            a[i] = i-1;
            for(long j=2*i;j<=1000000;j+=i){
                a[j] *= (i-1);
                a[j] /= i;
            }
        }
    }
}

long lcmSum(long n) {
    if(flag){
        phi();
        flag = false;
    }
    long sum =0;
    for(int d=1;d<=n ;d++){
        if(n%d==0)sum += a[d]*d;
    }
    sum++ ;
    return (n*sum)/2;
	// Write your code here.
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		cout<<lcmSum(n)<<"\n";	
	}
	
}
