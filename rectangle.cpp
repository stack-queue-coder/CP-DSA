#include<bits/stdc++.h>
#define fastrack ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;

int main(){
	fastrack;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		vector<int> r;
		vector<int> c;
		int x=0;
//		cout<<"--------------INPUT-----------------\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
				if(a[i][j] == '*'){
					x++;
					r.push_back(i);
					c.push_back(j);
				}
				if(x==2){
					break;
				}
			}
		}
		
		if((r[0] == r[1])){
			if(r[0]!=0){
				r[0]--;
				r[1]--;
			}
			else{
				r[0]++;
				r[1]++;
			}
		}
		else if(c[0]==c[1]){
			if(c[0]!=0){
				c[0]--;
				c[1]--;
			}
			else{
				c[0]++;
				c[1]++;
			}
		}
		
		a[r[0]][c[1]] = '*';
		a[r[1]][c[0]] = '*';
		
		
//		cout<<"--------------OUTPUT-----------------\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<< a[i][j];
			}
			cout<<"\n";
		}
	}
return 0;
}

