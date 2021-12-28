#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin >> n;int a[n];
	map<int  , vector<int> >mp;	
	for(int i=0;i<n;i++){
		int x; cin >> x;
		mp[x].push_back(i);
	}
	set< pair<int,int > > ans;
	for(auto ele : mp){
		if(ele.second.size() == 1){
			ans.insert({ele.first,0});
		}
		else if(ele.second.size() == 2){
			ans.insert({ele.first , ele.second[1] - ele.second[0]});
		}
		else{
			int cd = ele.second[1] - ele.second[0];
			int flag = 1;
			for(int i=2;i<ele.second.size();i++){
				if(ele.second[i] - ele.second[i-1] != cd){
					flag = 0;
					break;
				}
			}
			if(flag){
				ans.insert({ele.first , cd});
			}
		}
	}
cout<<ans.size()<<"\n";	
for(auto ele : ans){
	cout<<ele.first<<" "<<ele.second<<"\n";
}	
return 0;
}

