#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;	
	vector<int>t;
	for(int i=0;i<n;i++){
		if(s[i] == '2')
			t.push_back(i);
	}
	int size = t.size();
	if(size ==2 or size ==1){
		cout<<"NO\n";
		return;
	}
	vector<string> v(n , string(n , '='));
	for(int i =0;i<n;i++){
		v[i][i] = 'X';
	}
	for(int i=0;i<size;i++){
		int x = t[i] , y = t[(i+1)%size];
		v[x][y] = '+';
		v[y][x] = '-';
	}
	cout<<"YES\n";
	for (int i = 0; i < n; i++) cout << v[i] << '\n';
	
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

