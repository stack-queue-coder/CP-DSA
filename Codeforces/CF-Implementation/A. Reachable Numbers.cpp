#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int solve(int n){
	n++; 
	while(n%10 == 0){
		n/=10; 
	}
	return n;
}	

int main(){
	fast
	int n;
	cin >> n;
	unordered_set<int> s;
	while((s.find(n) == s.end())){
		s.insert(n);
		n = solve(n);
	}
	cout<<s.size()<<"\n";	 
return 0;
}
