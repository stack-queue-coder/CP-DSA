#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,s;
	cin >> s >> n;
	vector<pair<int,int>> v;
	int c=0;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v.push_back({a,b});
	}
	sort(v.begin() , v.end());
	for(int i=0;i<n;i++){
		if(s > v[i].first){
			s+=v[i].second;
			c++;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
		cout<<"YES";
	
return 0;
}

