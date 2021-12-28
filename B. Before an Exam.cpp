#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int d,sumTime;
	cin >> d >> sumTime;
	vector<pair<int,int>> v;
		int minSum =0;
		int maxSum =0;
	for(int i=0;i<d;i++){
		int x ,y;
		cin >> x >> y;
		v.push_back({x,y});
		minSum +=x;
		maxSum +=y;		
	}
	if(sumTime<minSum  or sumTime>maxSum){
		cout<<"NO\n";
		return 0;
	}
	else{
		cout<<"YES\n";
		for(int i =0;i<d;i++){
			minSum -= v[i].first;
			maxSum -= v[i].second;
			int t = min(sumTime -  minSum , v[i].second);
			if(i)cout<<" ";
			cout<<t;
			sumTime-=t;
		}
	}
	
return 0;
}	

