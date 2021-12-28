#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;


int main() {
       int n ,q ;
       cin >> n >> q;
       vector<int>v[n];       
       for(int i = 0;i<n;i++){
           int k;
           cin >> k;
           for(int i=0;i<k;i++){
               int x;
               cin >> x;
               v[i].push_back(x);
           }
       }
//       for(int i = 0; i<q;i++){
//           int m,n;
//           cin >> m >> n;
//           int c = 0;
//		   for(auto ele:v[m]){
//				cout<<ele<<" ";
//		   }
//           cout<<"\n";
//           }
    return 0;

}
