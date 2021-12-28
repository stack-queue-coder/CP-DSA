#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int compare(pair<int , int> &a , pair<int , int> &b){
	return a.second > b.second;
}

int main(){
	int n;
	cin >> n;
	int card =0 ,  score =0;
	
	vector<pair<int,int>> v;
	for(int i =0 ;i<n;i++){
		int x , y;
		cin >> x >> y;
		v.push_back({x,y});
		card += y;
	}
	
	if(card== 0){
		sort(v.begin() , v.end());
		cout << v[n-1].first;
		return 0;
	}
	card++;
	sort(v.begin() , v.end() , compare);
	int c =0;
	for(int i = 0;i<n;i++){
		cout<<v[i].first <<"---->" << v[i].second<<"\n";
//		if(card == 0){
//			break;
//		}
//		else if(v[i].second != 0) {
//			score += v[i].first;
//			card--;
//			c++;
//			v.erase(v.begin() + i);
//		}
//		else{
//			break;
//		}
	}
	sort(v.begin() , v.end());
//	n = n - c;
	cout<<"sort2\n";
	for(int i=n-1;i>=0;i++){
		cout<<v[i].first <<"---->" << v[i].second<<"\n";
//		if(card == 0){
//			break;
//		}
//		else{
//			score += v[i].first;
//			card--;
//		}
	}
//	cout<<score;
return 0;               
}

