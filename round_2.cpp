#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.length() - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}


int main(){
	
	string str = "acaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacacaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacaporyiueoooeuiyropacaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacacaagherynhkacabaacabcfdjacaagherynhkacabaacacaabacakhnyrehgaacaslooeuecslsceueoolsacaagherynhkacabaacacaabacakhnyrehgaacajdfcbacaabacakhnyrehgaacaplwerintawerq";
//	string str = "abbacabba";
	set<string>st;
	
	string s = "";
	for(int i =0 ;i < str.length(); i++){
		s += str[i];
		if(isPalindrome(s)){
			st.insert(s);
		}
	}
//	cout<<s<<"\n";
	string ans = "";
	for(auto ele:st){
		ans += ele;
	}
//	cout<<ans<<"\n";
	string res="";
	for(int i =47 ;i <ans.length();i+=47){
		res+=ans[i];
	}
	cout<<res;

return 0;
}

