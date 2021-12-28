#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int q;
	cin >> q;
	unordered_map<string , string> u;
	for(int i=0;i<q;i++){
		string o,n;
		cin >> o >> n;
		if(u.find(o) == u.end()){
			u[n] = o;
		}
		else{
			u[n] = u[o];
			u.erase(o);
		}
	}
	cout<<u.size()<<"\n";
	for(auto ele : u){
		cout<<ele.second<<" "<<ele.first<<"\n";
	}
	
return 0;
}

