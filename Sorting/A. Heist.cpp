#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i =0 ;i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin() , v.end());
	cout<<abs(n - (v[n-1] - v[0]+1))<<"\n";
}

int main(){
	fast
		 solve();
return 0;
}

