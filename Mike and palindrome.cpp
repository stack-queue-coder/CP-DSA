#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string s;
	cin >> s;
	int j=s.length()-1;
	int cnt =0 ;
	for(int i=0;i<=j;i++){
		if(s[i] != s[j]){
			cnt++;
		}
		j--;
	}
	if(cnt >1 and s.length()){
			cout<<"NO";
			return 0;
	}
	else if(cnt == 0 and s.length()%2==0){
		cout<<"NO";
		return 0;
	}
	else{
	cout<<"YES";
	}
return 0;
}

