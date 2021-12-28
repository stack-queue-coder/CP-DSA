#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;i<n;j++){
            if(i>0){
                for(int k=0;k<i;k++){
                    cout<<"+";
                    j=0;
                }
            }
        cout<<(j+1);
        }
        cout<<"\n";
    }
return 0;
}

