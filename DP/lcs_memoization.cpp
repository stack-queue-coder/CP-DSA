#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int> > dp(1001 , vector<int>(1001 , -1));

int lcs(int x, int y, string &s1, string &s2)
{
    if(dp[x][y] != -1){
        return dp[x][y];
    }
    if(x == 0 || y == 0){
            dp[x][y] = 0;	
    }
    else{	
        if(s1[x-1] == s2[y-1]){
            dp[x][y] = 1+lcs(x-1 , y-1 , s1 , s2);
   	    }
        else{
            dp[x][y] = max( lcs(x-1 , y , s1 , s2) , lcs(x, y-1, s1 , s2) );
        }
    }
    return dp[x][y];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1 , s2;
		cin >> s1 >> s2;
		int x = s1.length();
		int y = s2.length();
		cout<<lcs(x , y, s1 ,s2)<<"\n";
	}
return 0;
}

