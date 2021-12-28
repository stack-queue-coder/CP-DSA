#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int x , y;
	cin >> x >> y;
	string s;
	cin >> s;
	map<char , int>m;
	int len = 0 , cnt = 0;
	for(int i=0;i<30;i++){
		if(s[i] == '1'){
			cnt++;
			m['1']++;	
		}
		else{
			cnt = 0;	
		}	
		len = max ( len , cnt);
		
	}
	cout<<y*len + (m['1'])*x<<"\n";
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

