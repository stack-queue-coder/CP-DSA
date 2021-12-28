#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	int c = 0;
	while(t--){
		int n,m;
		cin >> n >> m;
		set<ll> s;
		for(int i=0;i<n;i++){
			ll j , k;
			cin >> j >> k;
			while(j<=k){
				s.insert(j);
				j++;
			}
		}
		vector<ll> a;
		for(int i=0;i<m;i++){
			ll x , y1,y2;
			cin >> x;
			if(s.find(x) != s.end()){
				a.push_back(x);
				s.erase(x);
			}
			else{
				s.insert(x);
				auto it = s.find(x);
				if(it == s.begin()){
					auto it1 = next(it);
					y1 = *it1;
					a.push_back(y1);
					s.erase(it1);
				}
				else if(it == prev(s.end())){
					auto it2 = prev(it);
					y2 = *it2;
					a.push_back(y2);
					s.erase(it2);
				}
				else{
						
					auto it1 = next(it);
					auto it2 = prev(it);
	
					y1 = *it1; y2 = *it2 ;
					if((y1 - x) < (x - y2)){
						a.push_back(y1);
						s.erase(it1);
					}
					else{
						a.push_back(y2);
						s.erase(it2);
					}
				}
				s.erase(x);
			}
		}
		cout<<"Case #"<<++c<<": ";
		for(auto ele :  a){
			cout<<ele<<" ";
		}
		cout<<"\n";
	}
return 0;
}

