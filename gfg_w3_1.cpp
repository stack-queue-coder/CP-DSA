#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n ,c ;
		cin >> n >>  c;
		int a[n];
		unordered_set<int> st;
		for(int i = 0 ; i< n ; i ++ ){
			cin >> a[ i]; 
			st.insert(a[i]);
		}
		for(int i = 0;i<n;i++){
			if(st.find(c^a[i]) != st.end()){
				cout<<"YES\n";
				goto end;
			}
		}
		cout<<"NO\n";
	}	
return 0;
}

