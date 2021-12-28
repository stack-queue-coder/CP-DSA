#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);


bool comp(const pair<int,int> &a, const pair<int,int> &b){
    return (a.first < b.first);
}
  

void solve(){
	int a , h , n;
	cin >> a >> h >> n ;
	vector<pair<int,int> >v(n);
	int x, y;
	for(int i=0;i<n;i++){	
		cin >> x >> y;
		v[i] = {x,y};
	}
	sort(v.begin() , v.end() , comp);
	int i=0;
	if(n == 1){
		while(h > 0 and y > 0){
			h -= x;
			y -= a;		
		}
		if(h<=0 and y>0){
			cout<<"1NO\n";
		}
		else{
			cout<<"1YES\n";	
		}
		
		return;
	}
	
	for(auto it : v){
		int d = it.second;
		while(h > 0 and d>0){
			h -= it.first;
			d -= a;	
//			cout<<h <<" " << d<<"\n";
		}
		if(h <= 0 and d>0){
			cout<<"2NO\n";
			return;
		}
		
		i++;
	}
	cout<<"2YES\n";
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

