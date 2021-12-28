#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a , a+n);
	unordered_set<int>s;
	for(int i=0;i<n;i++){
		if(s.find(a[i]) == s.end()){
			s.insert(a[i]);	
		}
		else{
			s.insert(a[i]+1);
		}
	}
		cout<<s.size()<<"\n";	
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

