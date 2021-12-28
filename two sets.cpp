#include<bits/stdc++.h>
#define pb push_back

using namespace std;
typedef long long ll;
int main(){
	ll  n;
	cin>> n ;
	if(n%4!=3 and n%4!=0){
		cout<<"NO";
		return 0;
	}
	vector<ll> v1{1,2},v2{3};
	vector<ll> v3{1,4},v4{2,3};
	if(n%2!=0){
		cout<<"YES\n";
	for(ll i=7;i<=n;i+=4){
			v1.pb(i-3);
			v1.pb(i);
			v2.pb(i-2);
			v2.pb(i-1);
			}
	cout<<v1.size()<<"\n";
	for(ll i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<"\n";
	cout<<v2.size()<<"\n";
	for(ll i=0;i<v2.size();i++){
		
		cout<<v2[i]<<" ";
	}	
	}
	if(n%2==0){
		cout<<"YES\n";
		for(ll i=8;i<=n;i+=4){
			v3.pb(i-3);
			v3.pb(i);
			v4.pb(i-2);
			v4.pb(i-1);
		}
		cout<<v3.size()<<"\n";
	for(ll i=0;i<v3.size();i++){
		
		cout<<v3[i]<<" ";
	}
	cout<<"\n";
	cout<<v4.size()<<"\n";
	for(ll i=0;i<v4.size();i++){
		
		cout<<v4[i]<<" ";
	}
	}  
	return 0;
}
