#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSubSequence(string str1, string str2,int m, int n)
{
     
    // Base Cases
    if (m == 0)
        return true;
    if (n == 0)
        return false;
 
    // If last characters of two
    // strings are matching
    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 
    // If last characters are
    // not matching
    return isSubSequence(str1, str2, m, n - 1);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string p ,q;
		cin >>  p >>  q;
		int n = p.length();
		int m = q.length();
		if(isSubSequence(p,q , n , m)  or isSubSequence(q ,p ,m , n)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
return 0;
}

