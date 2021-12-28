#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1000003;

ll fast(ll power){
	ll x =  2;
	ll res = 1;
	while(power>0){
		if(power&1 != 0){
			res = (res*x)%MOD;	
		}
		x = (x*x)%MOD;
		power = power>>1;
	}
	return res;
}


int main(){
	string p;
	cin >> p;
	
	unordered_map<char , string> u;
	u['>']  = "1000";
	u['<']  = "1001";
	u['+']  = "1010";
	u['-']  = "1011";
	u['.']  = "1100";
	u[',']  = "1101";
	u['[']  = "1110";
	u[']']  = "1111";
	string str="";
	for(int i =0 ;i<p.length();i++){
		str += u[p[i]];
	}
//	cout<<str<<"\n";
//	reverse(str.begin() , str.end());
	ll ans =0;
//	cout<<str<<"\n";
	ll kk;
	int size = str.length();
	for(int i=size-1;i>=0;i--){
		if(str[i] == '1'){
			kk = fast(size - 1 - i);
			kk = kk%MOD;
			ans += kk;
			ans = ans%MOD;
		}
	}
	cout<<ans;
	
	
	
	
	
	
//	
//	
//
//	for(int i = 0;i<str.length();i++){
//		if(str[i] == '1'){
//			kk = fast(i);
//			kk = kk%MOD;
//			ans += kk;
//			ans %= MOD;
//			ans = ans%MOD;
//		}
//	}
//	cout<<ans;
//	
return 0;
}

