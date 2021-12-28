#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<pair<int,int> >v(n);
	for(int i=0;i<n;i++){
		int x,y;
		cin >> x >> y;
		v[i] = {x,y};
	}
	sort(v.begin() , v.end());
	for(int i=0;i<n-1;i++){
		if(v[i].second > v[i+1].second){
			cout<<"Happy Alex\n";
			goto end;
		}
	} 
	cout<<"Poor Alex\n";
	end : ;	
}

int main(){
	fast
	solve();
return 0;
}

