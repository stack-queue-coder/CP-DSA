#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	vector<pair<int, int> > b(n);
	for(int i=0;i<n;i++){
		int bi;
		cin >> bi;
		b[i] = {bi , i};
	}
	sort(b.begin() , b.end());
	vector<int> a(n);
	int want = 0;
	for(auto [bi , i] : b){
		if(want <= bi){
			a[i] = want;
			want ++;
		}
		else{
			a[i] = INT_MAX;
		}
	}
	for(auto i:a){
		cout<<i<<" ";
	}
	cout<<"\n";
	
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

