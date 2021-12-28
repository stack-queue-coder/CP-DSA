#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back;
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		int r[n] , l[n];
		for(int i=0;i<n;i++){ // train
			cin >> a[i];
			l[i] = -1;
			r[i] = -1;
		}
		for(int i=0;i<m;i++){ // passengers
			cin >> b[i];
		}
		int j=0;
		int k;
		for(int i=0;i<n;i++){
//			cout<<"C\n";
			if(a[i] == 1){
				l[i] = 0;
				j++;
				k = i;
			}
			else if(j != 0){
				l[i] = i-k;
			}	
		}
		l[0] = 0;
//		cout<<"L :";
//		for(int i=0;i<n;i++){
//			cout<<l[i] <<" ";
//		}
//		cout<<"\n";
		j=0;
		for(int i=n-1;i>=0;i--){
//			cout<<"V\n";
			if(a[i] == 2){
				r[i] = 0;
				j++;
				k=i;
			}
			else if(j != 0){
				r[i] = k - i;
			}	
		}
//		cout<<"R :";
//		for(int i=0;i<n;i++){
//			cout<<r[i] <<" ";
//		}
//		cout<<"\n";
		int mint[n];
		for(int i=0;i<n;i++){
//			cout<<"F\n";
			if((l[i] == -1) || (r[i] == -1)){
				mint[i] = max(l[i] , r[i]);
			}
			else{
				mint[i] = min(l[i] , r[i]);
			}
		}
//		cout<<"mint :";
//		for(int i=0;i<n;i++){
//			cout<<mint[i] <<" ";
//		}
//		cout<<"\n";
		for(int i=0;i<m;i++){
			cout<<mint[(b[i] - 1)] <<" ";
		}
		cout<<"\n";
	}
return 0;
}

