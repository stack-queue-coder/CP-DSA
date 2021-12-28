#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve(){
	int t[3];
	cin >> t[0] >> t[1] >> t[2];
	int m[3];
	cin >> m[0] >> m[1] >> m[2];
	int n = 240;
	ll ans = 0;
	ll res = 0;
	ll final = 0;
	for(int i=0;i<3;i++){
		n -= t[i]*20;
		ans += 20*m[i];
		int n1 = n , n2 = n , ans1 = ans , ans2 = ans;
///////////////////////////////////////////////////////////////////////////	
//		cout<<ans<<"\n";
		
		int q1 = n1 / t[(i+1)%3];
		if(q1 > 20){
			q1 = 20;
		}
		n1-= q1*t[(i+1)%3];
		ans1 += q1*m[(i+1)%3] ;
		cout<<q1<<"\n";
//		cout<<ans1<<"\n";
		q1 = n1 / t[(i+2)%3] ;
		if(q1 > 20){
			q1 = 20;
		}
//		n1 -= (q1*t[(i+2)%3]);
		ans1 += q1*m[(i+2)%3];
//		cout<<ans1<<"\n";
		cout<<q1<<"\n";
		int q2 = n2 / t[(i+2)%3];
		if(q2 > 20){
			q2 = 20;
		}
		n2 -= (q2*t[(i+2)%3]) ;
		ans2 += q2*m[(i+2)%3] ;
//		cout<<ans2<<"\n";
		cout<<q2<<"\n";
		q2 = n2 / t[(i+1)%3] ;
		if(q2 > 20){
			q2 = 20;
		}
//		n2 -= (q2*t[(i+1)%3]);
		ans2 += q2*m[(i+1)%3];
//		cout<<ans2<<"\n";
		cout<<q2<<"\n";
		ans = max(ans1 , ans2);
		cout<<"first "<<i<<" "<<ans<<"\n";
		res = max(res ,ans);
		if(res > final){
			final  =  res;
		} 		
		n = 240;
		ans = 0;
		res = 0;
		
	}
	cout<<final<<"\n";
//	int x = max(a , max(b,c));
//	marks += (240/x)
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

