#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<ll> prime(10000001 , 1);
vector<ll> p ;
set<ll>pr;
void isPrime(){
	p.push_back(-1);
	for(ll i=2;i<=10000000;i++){
		if(prime[i]){
			pr.insert(i);
			p.push_back(i);
			for(ll j = i*i;j<=10000000;j+=i){
				prime[j] = 0;
			}
		}	
	}
}
	
//void solve(){
//	int x ,y;
//	cin >> x >> y;
//	ll dp[y];
//	dp[y] = 0;
//	for(int i=y-1;i>=x;i--){
//		if(prime[i]){
//			dp[i] = min(dp[i+2] +1 , dp[i+1]+1);
//		}
//		else{
//			dp[i] = dp[i+1]+1;
//		}
//		cout<<dp[i]<<" ";
//	}
//	cout<<dp[x]<<"\n";
//}

void solve(){
	int x , y;
	cin >> x >> y;
	int ans = 0;

	for()
	
	for(int i=x;i<y;i++){
		if(prime[x]){
			prime
		}
		else{
			
		}
	}
//	auto f = p.begin();
//	for (auto i = p.begin()+1; i != p.end(); ++i){
//		if(*i - *f > 2){
//			ans += (*i - *f ) -1;
//		}
//		else{
//			ans += (*i - *f );
//		}
//		f = i;
//		cout<<*i<<" ";
//	}
	
//	cout<<ans<<"\n";
}

int main(){
	isPrime();
	fast
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

