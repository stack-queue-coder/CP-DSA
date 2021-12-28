#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int y;
        cin >> y;
        v.push_back(y);
    }
    for(auto it:v){
        cout<<it <<" ";
    }
    int x;
    cin >> x;
    	v.erase(v.begin()+x-1);
	for(auto it:v){
        cout<<it <<" ";
    }
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1 , v.begin() + b-1);
    for(auto it:v){
        cout<<it <<" ";
    }
    return 0;
}

