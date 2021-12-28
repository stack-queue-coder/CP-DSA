#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sortbysec(const pair<int,int> &a , const pair<int,int> &b){
	return (a.second < b.second) ;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		vector<pair<int,int>> v;
		for(int i=0;i<5;i++){
			int a,b;
			cin >> a >> b;
			v.push_back({a,b});
		}
		
		sort(v.begin() , v.end() , sortbysec);
		cout<<"sorted vector\n";
		for( auto ele:v){
			cout<<ele.first<<" "<<ele.second<<"\n";
		}
	}
return 0;
}

