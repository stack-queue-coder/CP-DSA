#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a , ll b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b , a%b);
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin  >> n;
		if(n==1){
			cout<<"1\n";
		}
		else{
			ll a[n];
			map<ll ,ll> u;
			ll sum = 0;
			for(int i=0;i<n;i++){
				cin >> a[i];
				sum += a[i];
			}
			cout<<"sum : "<<sum<<"\n";
//			sort(a,a+n);
			ll d;
			ll res ;
			ll x = a[0];
			bool flag = true;
			for(int i=1;i<n;i++){
				x = gcd(a[i] ,  x);
				res = gcd(a[i]  , a[i-1]);
				cout<<"x "<<x<<" res "<<res<<"\n";
				if(x!=res and flag){
					d = a[i];
					flag= false;
				}
				u[res]++;
			}
			cout <<"X :"<<x<<"\n";
			cout<<"res :"<<res<<"\n";
			cout<<"MAP SIZE :"<<u.size()<<"\n";
			sort(a,a+n);
			if(u.size() > 2){
				for(int i=0;i<n;i++){
					sum -= a[n-1];
					sum /= x;
					sum++;
				}
				cout<<"sum after operation"<<sum<<"\n";
				cout<<"sus "<<a[n-1];
			}
			else if(u.size() == 1){
				sum -= a[n-1];
				sum /= res;
				sum++;
				cout<<"sum after operation"<<sum<<"\n";
				cout<<"sus "<<a[n-1]<<"\n";
			}
			else{ // size = 2
				ll c,e=0;
				for(auto ele:u){
					if(ele.second != 1){
						c=ele.first;
						e++;	 
					}
				}
				if(e==1){
					sum -= d;
					sum /= c;
					sum++;
					cout<<"sum after operation"<<sum<<"\n";
				cout<<"sus "<<d<<"\n";
				cout<<"new gcd "<<c<<"\n";
				}
				else{
					sum -= a[n-1];
					sum /= x;
					sum++;
					cout<<"sum after operation"<<sum<<"\n";
				cout<<"sus "<<a[n-1]<<"\n";
				}
			}
			cout<<"final answers should be eqal to sum after operations "<<sum<<"\n";
		}
	}
return 0;
}

