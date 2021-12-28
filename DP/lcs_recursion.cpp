#include<bits/stdc++.h>
using namespace std;
#define ll long long

    int lcs(int x, int y, string s1, string s2)
    {
        if(x == 0 || y == 0){
            return 0;
        }
        if(s1[x-1] == s2[y-1]){
            return 1+lcs(x-1 , y-1 , s1 , s2);
        }
        else{
            return max( lcs(x-1 , y , s1 , s2) , lcs(x, y-1, s1 , s2) );
        }
    }

int main(){
	int t;
	while(t--){
		string s1 , s2;
		cin >> s1 >> s2;
		int x = s1.length();
		int y = s2.length();
		cout<<lcs(x , y, s1 ,s2)<<"\n";
	}
return 0;
}

