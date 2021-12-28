#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	int x =0;
	while(t--){
		ll a,b,c,d,e,f,g,h,i;
		unordered_map<ll,ll> u;
		cin >> a >> b >> c >> d >> f >> g >> h >> i;
		if((d+f)%2 == 0){
			e = (d+f)/2;
			u[e]++;
		}
		if((b+h)%2 == 0){
			e = (b+h)/2;
			u[e]++;
		}
		if((a+i)%2 == 0){
			e = (a+i)/2;
			u[e]++;
		}
		if((c+g)%2 == 0){
			e = (c+g)/2;
			u[e]++;
		}
		ll y = INT_MIN;
		for(auto ele:u){
			y = max(ele.second , y);
		}
		if((a+c)%2 == 0 and (a+c)/2 == b){
			y++;	
		}
		if((a+g)%2 == 0 and (a+g)/2 == d){
			y++;
		}
		if((c+i)%2==0 and (c+i)/2 == f){
			y++;
		} 
		if((g+i)%2 == 0 and (g+i)/2 == h){
			y++;
		}
		cout<<"Case #"<<++x<<": "<<y<<"\n";
	}
return 0;
}

