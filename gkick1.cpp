#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
	ll t;
	ll c=0;
	cin>> t;
	while(t--){
	    ll n,k;
	    cin>>n >> k;
	    string s;
	    cin>> s;
	    ll l=0,r=n-1,count=0;
        while(l<r){
        	if(s[l]!=s[r]){
        		count++; //goodness
			}
			l++;
			r--;
        }
	    cout<<"Case #"<<++c<<": "<<abs(k-count)<<"\n";
		}	
	return 0;
}
