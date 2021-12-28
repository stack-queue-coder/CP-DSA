#include<iostream>
#include<vector>
using namespace std;

long long fast(const vector<int>& number){
	int n=number.size();
    int max_index= -1;
for(int i=0;i<n;++i)
if(max_index==-1 ||(number[i]>number[max_index]))
max_index=i;
}
int main(){
	int n;
	cin>>n;
	vector<int> number(n);
	for(int i=0;i<n;++i){
		cin>>number[i];
	}
long long result=fast(number);
cout<<result;
return 0;
}
