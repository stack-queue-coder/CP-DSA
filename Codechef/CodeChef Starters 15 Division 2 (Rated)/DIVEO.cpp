#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	ll n,a,b;
	cin >> n >> a >> b;	
//	map<ll , ll > m;
	ll e=0,o=0;
	for (ll d = 2; d * d <= n; d++) {
        while(n % d == 0) {
        	if(d%2==0)e++;
        	else o++;
//        	m[d]++;
            n /= d;
        }
    }
    if(n>1){
//    	m[n]++;
		(n%2 == 0 ? e++ : o++);
	}
	ll ans =0;
	if(a>=0 and b>=0){
		ans = e*a + o*b;
	}
	else if(a>=0 and b<0){
		ans = (e > 0 ? a*e : b);
	}
	else if(b >= 0 and a<0){
		ans = b*o + (e > 0 ? a : 0);
	}
	else if(a<0 and b<0){
		ans = (e > 0 ? a : b);
	}
	cout<<ans<<"\n";
	
	
	
//	for(auto ele:m){
//		cout<<ele.first<<" "<<ele.second<<"\n";
//		cout<<o<<" "<<e<<"\n";
//	}
//		
//    ll ans =0;
//    if(a>=0 and b>=0){
//    	for(auto ele:m){
//    		if(ele.first % 2 ==0){
//    			ans += (ele.second * a);	
//			}
//			else{
//				ans += (ele.second*b);
//			}
//		}
//		cout<<ans<<"\n";
//		return;
//	}
//	if(a <=0 and b>=0){
//		for(auto ele:m){
//			if(ele.first % 2 != 0){
//				ans += (b*ele.second);
//			}
//		}
//		if(e)ans+=a;
//		cout<<ans<<"\n";
//		return;
//	}
//	if(b <= 0 and a >=0){
//		for(auto ele:m){
//			if(ele.first % 2 == 0){
//				ans += (ele.second * a);
//			}
//		}
//		if(e==0)ans+=b;
//		cout<<ans<<"\n";
//		return;
//	}
	
	// 30
	// 2--->1
	// 3---->1
	// 5---->1
	// -2 -1
//	if(a< 0 and b <0){
//		if(e)ans += a  ;
//		else ans += b;
//		cout<<ans<<"\n";
//		return;
//	}
//	if(a > 0 and b == 0){
//		for(auto ele:m){
//			if(ele.first % 2 == 0){
//				ans += ele.second*a;
//			}	
//		}
//		cout<<ans<<"\n";
//		return;
//	}
//	if(a < 0 and b == 0){
//		if(e)ans += a;
//		cout<<ans<<"\n";
//		return;
//	}
//	if(a == 0 and b > 0){
//		for(auto ele:m){
//			if(ele.first % 2 != 0){
//				ans += ele.second*b;
//			}	
//		}
//		cout<<ans<<"\n";
//		return;
//	}
//	if(a == 0 and b < 0){
//		cout<<ans<<"\n";
//		return;
//	}
//	if(a == 0 and b == 0){
//		cout<<ans<<"\n";
//		return;
//	}
	
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

