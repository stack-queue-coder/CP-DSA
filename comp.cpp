#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3],b[3],c[]={0,0};
    for(int i=0;i<3;i++){
        cin>> a [i];
    }
    for(int i=0;i<3;i++){
        cin>> b[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            c[0]++;
        }
        else if(b[i]>a[i]){
            c[1]++;
        }
    }
    if(c[0]>c[1]){
        cout<<c[0]<<" "<<c[1];    
    }
    else{
        cout<<c[1]<<" "<<c[0];
    }
    
    return 0;
}

