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
		int n;
		cin >> n;
		if(n <= 2){
			cout<<"0\n";
		}
		else{
		vector<pair<ll,ll>> p;
		vector<pair<ll,ll>> q;
		for(int i=0;i<n;i++){
			ll x,y;
			cin >> x>> y;
			p.push_back({x,y});
			q.push_back({y,x});
		}
		sort(p.begin() , p.end());  // sort acc to x cord
		vector<ll> pl_maxh;
		vector<ll> pl_minh;
		ll tempmax = p[0].first;
		ll tempmin = p[0].first;
		for(int i=0;i<n;i++){
			tempmax = max(tempmax , p[i].first);
			tempmin = min(tempmin , p[i].first);
			pl_maxh.push_back(tempmax);
			pl_minh.push_back(tempmin);			
		}
		vector<ll> pr_maxh;
		vector<ll> pr_minh;
		tempmax = p[n-1].first;
		tempmin = p[n-1].first;
		for(int i=n-1;i>=0;i--){
			tempmax = max(tempmax , p[i].first);
			tempmin = min(tempmin , p[i].first);
			pr_maxh.push_back(tempmax);
			pr_minh.push_back(tempmin);			
		}
		ll areax = 1000000000000000000;
		for(int i=0;i<n-1;i++){
			ll larea = (p[i].first - p[0].first)*(pl_maxh[i] - pr_minh[i]);
			ll rarea = (p[n-1].first - p[i+1].first)*(pr_maxh[n-1-i] - pr_minh[n-1-i]);
			cout<<"larea "<<larea<<"....rarea "<<rarea<<"\n";
			areax = min(areax , larea + rarea); 
			cout<<"areax "<<areax<<"\n";
		}		
		
		
		sort(q.begin() , q.end());  // sort acc to y cord
		cout<<"y sorted\n";
		vector<ll> ql_maxw;
		vector<ll> ql_minw;
		tempmax = q[0].first;
		tempmin = q[0].first;
		for(int i=0;i<n;i++){
			tempmax = max(tempmax , q[i].first);
			tempmin = min(tempmin , q[i].first);
			pl_maxh.push_back(tempmax);
			pr_minh.push_back(tempmin);			
		}
		vector<ll> qr_maxw;
		vector<ll> qr_minw;
		tempmax = q[n-1].first;
		tempmin = q[n-1].first;
		cout<<tempmin;
		for(int i=n-1;i>=0;i--){
			tempmax = max(tempmax , q[i].first);
			tempmin = min(tempmin , q[i].first);
			qr_maxw.push_back(tempmax);
			qr_minw.push_back(tempmin);			
		}
		ll areay = 1000000000000000000;
		for(int i=0;i<n-1;i++){
			ll larea = (q[i].first - q[0].first)*(ql_maxw[i] - qr_minw[i]);
			ll rarea = (q[n-1-i].first - q[i+1].first)*(qr_maxw[n-1-i] - qr_minw[n-1-i]);
			cout<<"---------------y axix--------------"<<"\n";
			cout<<"larea "<<larea<<"....rarea "<<rarea<<"\n";
			areax = min(areax , larea + rarea); 
			cout<<"areax "<<areax<<"\n";
		}
		cout<<min(areax , areay)<<"\n";
	}
}
return 0;
}

