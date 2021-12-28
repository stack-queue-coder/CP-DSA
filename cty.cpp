#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include <fstream>
#include<vector>
#include<string>
using namespace std;


int main(){
	string name ;
	cin >> name;
	name += ".txt";
	ifstream infile(name);
	string id , val;
	vector<string>x,y;
	while (infile >> id >> val)
	{
	    x.push_back(id);
	    y.push_back(val);
	}
	cout<<"done\n";
	int min , max;
	cin >> min >> max;
	int n = x.size();
	int tot = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<y[i].length();j++){
			char s = y[i][j];
			if(isalpha(s)){
				tot += s - 'A' + 1;
			}
		}
		if(tot >= min and tot <= max){
			cout<<x[i]<<" "<<y[i]<<"\n";
		}
		tot = 0;
	}
return 0;
}

