#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int compare(pair<int , int> &a , pair<int , int> &b){
	return a.second > b.second;
}

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v;

		int card =1 ,  score =0;
	for(int i=0;i<n;i++){
		int x ,y;
		cin >> x >> y;

		v.push_back({x,y});
		card += y;
	}	
	if(n== 1){
		sort(v.begin() , v.end());
		cout << v[0].first;
		return 0;
	}
	sort(v.begin() , v.end() , compare);
	for(int i=0;i<n;i++){
		if(card == 0){
			cout<<score;
			return 0;
		}		
		else if(v[i].second != 0){
//				cout<<v[i].first <<"---->" << v[i].second<<"\n";
			score += v[i].first;
			card--;
		}
		else{
				break;
		}
	}
	sort(v.begin() , v.end());
//	cout<<"sort2\n";
	for(int i = n-1;i>=0;i--){
		
		if(card == 0){
			cout<<score;
			return 0;
		}
		else if(v[i].second == 0){
//				cout<<v[i].first <<"---->" << v[i].second<<"\n";
			score += v[i].first;
			card--;
		}
	}
	cout<<score;
return 0;
}

