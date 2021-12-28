#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);

bool comp(ll a , ll b){
	return a>b;
}

int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<ll>a(n);
		ll suma = 0 , sumb = 0;
		for(int i=0;i<n;i++){
			cin >>a[i];
			suma+=a[i];
		}
		vector<ll>b(n-1);
		for(int i=0;i<n-1;i++){
			cin >>b[i];
			sumb+=b[i];
		}
		sort(a.begin() , a.end(), comp);
		ll d = suma - sumb;
		ll maxx = 1000000009;
		for(int i=0;i<n;i++){
			if((a[i] - d)%(n-1) == 0 and (a[i] - d) >=0){
				maxx = min(maxx , (a[i] - d)/(n-1));
			}
		}
		cout<<maxx<<"\n";
	}	
return 0;
}

