#include <cstdlib>
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

long long MaxPairwiseProduct(const vector<int>& number) {
    long long max_product = 0;
    int n = number.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
        	long long x=number[first]*number[second];
            max_product = max(max_product,x);
        }
    }

    return max_product;
}
long long maxpairwiseproduct_fast(const vector<int>&number){
	int n = number.size();
	int max_index1=-1;
	for(int i=0;i<n;++i)
	    if((max_index1==-1)||(number[i]>number[max_index1]))
	    max_index1=i;
	
	int max_index2=-1;
	for(int j=0;j<n;++j)
	    if((number[j] != number[max_index1]) && ((max_index2=-1) || (number[j]>number[max_index2])))
		  max_index2=j;
	cout<<max_index1<<' '<<max_index2<<endl;  
return number[max_index1]*number[max_index2];		  
	
}

int main() {
	while(1){
    int n=rand() % 4 + 2;
    cout<<n<<"\n";
    vector<int>a;
    for (int i = 0; i < n; ++i) {
        a.push_back(rand() % 10);
        }
    for (int i = 0; i < n; ++i){
    	cout<<a[i]<<' ';
	}
	cout<<"\n";
	long long res1=MaxPairwiseProduct(a);
	long long res2=maxpairwiseproduct_fast(a);
	if(res1!=res2){
		cout<<"wrong answer :"<<res1<<' '<<res2<<"\n";
		break;
	}
	else{
	
    cout <<"ok\n";
    return 0;}}
int n; 
cin>>n;
vector<int>number(n);
for (int i = 0; i < n; ++i){
	cin>>number[i];
}
long long result=MaxPairwiseProduct(number);
cout<<result;

return 0;
}

