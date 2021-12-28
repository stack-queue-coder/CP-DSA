#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    for(i=1;i<=100;i++){
        int count=0;
        for(j=1;j<=i;j++){
            if (i%j==0)
            {
                count++;
            }
        }
        if(count==2){
            if(n%i==0){
                printf("%d is not a centaprime\n",n);
                return 0;
            }
        }
    }
    printf("%d is a centaprime\n",n);
    return 0;
}
