#include<stdio.h>
#include<stdlib.h>

using namespace std;
#define ll long long

int fac(int n){
    int i=1;
    while(n){
        i *= n;
        n--;
    }
    return i;
}

int main(){
    int n;
    scanf("%d",&n);
    int i;
    float sum = 0;
    printf("%d\n",fac(n));
    for(i=1;i<=n;i+=2){
        sum += (1.0/fac(i));
    }
    printf("%f",sum);
return 0;
}
