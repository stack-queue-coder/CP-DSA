#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string encodeString(string str)
{
    unordered_map<char, int> map;
    string res = "";
    int i = 0;
 
    // for each character in given string
    for (char ch : str) {
 
        // If the character is occurring
        // for the first time, assign next
        // unique number to that char
        if (map.find(ch) == map.end())
            map[ch] = i++;
 
        // append the number associated
        // with current character into the
        // output string
        res += to_string(map[ch]);
    }
 
    return res;
}



int main(){
	int sum = 0;
	int t;
	cin >> t;
	while(t--){
		string rhyme;
		cin >> rhyme;
		
		int count = 0;
		
		unordered_map<char , char > map;
		int words = rhyme.length();
		string a[words];
		
		for(int i = 0 ; i < words ; i ++ ){
			cin >> a[i];
		}
		int c = 0;
		string ans = "";
		for(int i = 0 ; i < words ; i ++ ){
			string s = a[i];
			int len = s.length();
			ans += s[len -1];
		}
		string hash_rhyme = encodeString(rhyme);
		string hash_ans = encodeString(ans);
		
		for(int i = 0; i<words;i++){
			if(hash_rhyme[i] == hash_ans[i]){
				count++;
			}
			else{
				break;
			}
		}
		sum += count;
	}
	cout<<sum;
return 0;
}

