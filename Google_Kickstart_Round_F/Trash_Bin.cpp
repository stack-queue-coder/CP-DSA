#include<bits/stdc++.h>
using namespace std;
#define ll long long

int loop = 0;

ll chhat(ll a , ll b){
	return (a%b==0) ? (a/b):(a/b)+1;
}

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int j=-1;
	int ind[n];
	for(int i=0;i<s.length();i++){
		if(s[i]=='1'){
			j = i;
		}
		if(j!=-1){
			ind[i] = abs(j-i);
		}
		else{
			ind[i] = INT_MAX;
		}
	}
	j = -1;
	ll sum = 0;
	for(int i=s.length() -1 ;i>=0;i--){
		if(s[i]=='1'){
			j = i;
		}
		if(j!=-1){
			ind[i] = min(ind[i] , abs(j-i));
		}
		sum += ind[i];
	}
	cout<<"Case #"<<++loop<<": "<<sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout<<"\n";
	}
return 0;
}

