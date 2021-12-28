#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
        int m , n;
        cin >> m >> n;
        int a[m][n];
        vector<int> b;
        for(int i = 0 ;i <m ;i++){
            for(int j = 0 ; j < n;j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    b.push_back(i);
                }
            }
        }
        for(auto i:b){
            for(int j = 0 ; j < n;j++){
                a[i][j] = 1;
            }
        }
        for(int i = 0 ;i <m ;i++){
            for(int j = 0 ; j < n;j++){
                cout<< a[i][j] <<" ";
            }
            cout<<"\n";
        }
	}
return 0;
}

