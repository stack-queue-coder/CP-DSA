#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int n , m;
	cin >> n >> m;
//	vector<string> s(n+1);
	char s[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> s[i][j];		
		}
	}
	
	ll total  = n*m;
	ll ans1 = 0 , ans2 = 0;
	for(int i=0;i<n;i++){
		for(int j = 0;j<m;j++){
			if( (i+j)%2 == 0 and s[i][j] == '.'){
				ans1++;
			}
			if((i+j)%2 !=0 and s[i][j] == '*'){
				ans1++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j = 0;j<m;j++){
			if( (i+j)%2 != 0 and s[i][j] == '.'){
				ans2++;
			}
			if((i+j)%2 ==0 and s[i][j] == '*'){
				ans2++;
			}
		}
	}
	
	if(total % 2 == 0)cout<<min(ans1 , ans2)<<"\n";
	else cout<<ans1<<"\n";
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

