#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	vector<int> v = {1,2,3,5,7,9};
	auto a = lower_bound(v.begin() , v.end() , 3);
	auto b = upper_bound(v.begin() , v.end() , 3);
	cout<<*a <<"  "<<*b;
	
return 0;
}

