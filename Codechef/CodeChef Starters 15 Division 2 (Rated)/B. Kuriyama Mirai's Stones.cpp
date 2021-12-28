#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<int> v(n) , u(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
		u[i] = v[i];
	}
	vector<ll>prev(n) , preu(n) ;
	prev[0] = v[0];
	sort(u.begin() , u.end());
	preu[0] = u[0];
	for(int i = 1 ; i<n;i++){
		prev[i] = prev[i-1] + v[i];
		preu[i] = preu[i-1] + u[i];
	}
	int m;
	cin >> m;
	int l , r , type;
	for(int i=0;i<m;i++){
		cin >> type >> l >> r;
		if(type == 1){
			if(l!=1)cout<<prev[r-1] - prev[l-2]<<"\n";
			else cout<<prev[r-1]<<"\n";
		} 
		else{
			if(l!=1)cout<<preu[r-1] - preu[l-2]<<"\n";
			else cout<<preu[r-1]<<"\n";
		}
	}
}

int main(){
	fast
	solve();
return 0;
}

