#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> sieve(40000, 1);

void precomp(){
	for(int i=2;i*i<40000;i++){
		if(sieve[i] == 1){
			for(int j=i*i;j<40000;j+=i){
				sieve[j] = 0;
			}
		}
	}
}

void solve(){
	int a ,b ,k;
	cin >> a >> b >> k;
	
	if(a == 1 and b == 1){
		cout<<"NO\n";
		return;
	}
	if(k == 1){
		if(a!=b and ( a%b == 0 or b%a == 0)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		return;
	}
	int numa = 0 , numb = 0;
	for(int i=2;i<40000;i++){
		if(sieve[i]){
			while(a != 1 and a%i == 0){
				a /= i;
				numa ++;
			}
			if(a == 1){
				break;
			}
		}
	}
	if(a > 1)numa++;
	for(int i=2;i<40000;i++){
		if(sieve[i]){
			while(b != 1 and b%i == 0){
				b /= i;
				numb ++;
			}
			if(b == 1){
				break;
			}
		}
	}
	if(b>1)numb++;
	if(numa + numb >= k){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}

int main(){
	fast
	precomp();
	int t;
	cin >> t;
	while(t--){
		 solve();
	}
return 0;
}

