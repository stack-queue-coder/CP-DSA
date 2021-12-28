#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fac(int n){
	int i;
	n++;
	while(n--){
		i *= n;
	}
	return i;
}

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int sum = 0;
	for(i=1;i<=n;i+=2){
		sum += (1/fac(i));
	}
	printf("%d" , sum);
return 0;
}

