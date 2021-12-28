#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,q;
		cin >> n >> m >> q;
		set<int> bus;
		bool flag = true;
		for(int j=0;j<q;j++){
			char s;
			int i;
			cin >> s >> i;
			
			if(s == '+'){
				if(bus.find(i) != bus.end()){	//already on bus
					flag = false;	
				}
				else{
					bus.insert(i);
					if(bus.size() > m) flag = false;
				} 
			}
			else if(s == '-'){
				if(bus.find(i) == bus.end()){  //not on bus
					flag = false;
				}
				else{
					bus.erase(i);
				}
			}
		}
		(flag == true)?cout<<"Consistent":cout<<"Inconsistent";
		cout<<"\n";
	}
return 0;
}

