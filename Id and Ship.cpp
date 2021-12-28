#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	unordered_map<char , string> map;
		map['b'] = "BattleShip";
		map['B'] = "BattleShip";
		map['c'] = "Cruiser";
		map['C'] = "Cruiser";
		map['d'] = "Destroyer";
		map['D'] = "Destroyer";
		map['f'] = "Frigate";
		map['F'] = "Frigate";
	int t;
	cin >> t;
	while(t--){
		char a;
		cin >> a;
		cout<<map[a]<<"\n";;
	}
return 0;
}

