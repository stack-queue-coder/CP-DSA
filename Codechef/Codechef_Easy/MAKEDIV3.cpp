#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n;
	cin >> n;
	if(n==1){
		cout<<3<<"\n";
	}
	else if(n==2){
		cout<<15<<"\n";
	}
	else{
		string str = "11"	;
		n -= 3;
		while(n--){
			str+="0";
		}
		str+="1";
		cout<<str<<"\n";
	}
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

