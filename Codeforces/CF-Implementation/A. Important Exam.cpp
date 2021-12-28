#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , m;
	cin >> n >> m;
	vector< map<char , int > > v(m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;
			cin >> c; 
			v[j][c]++;	
		}
	}
	int a[m];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}	
	int i=0;
	int ans=0;
	for(auto it:v){
		int h = -1;
		for(auto ele:it){
			h = max(h , ele.second);
		}
		ans += (h*a[i]);
		h =0;
		i++;
	}
	cout<<ans;
}

int main(){
	fast
	solve();
return 0;
}

