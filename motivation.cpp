#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortbysecdesc(const pair<ll , ll> &a, const pair<ll , ll> &b)
{
       return a.second>b.second;
}

int main(){
	int t;
	cin >> t ;
	while(t--){
		int n;
		ll x;
		cin >> n >> x;
		vector< pair <int,int> > vect;
		ll a1[n],a2[n];
		for(int i=0;i<n;i++){
			cin >> a1[i] >> a2[i];
		}
		for (int i=0; i<n; i++){
        	vect.push_back( make_pair(a1[i],a2[i]) );
		}
		sort(vect.begin(), vect.end(), sortbysecdesc);
		for(int i=0;i<n;i++){
			if(vect[i].first <= x){
				cout<<vect[i].second<<"\n";
				break;
			}
		}
	}
	return 0;
}
