#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<n-1;i++){
		string str;
		str += s[i];
		str += s[i+1];
		if(str == "ab" or str == "ba"){
			cout<<i+1<<" "<<i+2<<"\n";
			return;
		}
	}
	cout<<-1<<" "<<-1<<"\n";
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

