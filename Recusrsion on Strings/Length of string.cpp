#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void removeX(char s[]){
	if(s[0] == '\0'){
		return;
	}
	if(s[0] != 'x'){
		removeX(s+1);
	}
	else{
		int i =1;
		for( ; s[i]!='\0';i++){
			s[i-1] = s[i];
		}
		s[i-1] = s[i];
		removeX(s);
	}
}


int solve(char s[]){
	if(s[0] == '\0'){
		return 0;
	}
	int smallString = solve(s+1);
	return 1+smallString;
}

int main(){
	char s[100];
	cin >> s;
	
//	int l = solve(s);
	removeX(s);
	cout<<s<<endl;
return 0;
}

