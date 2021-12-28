#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void selection_sort(vector<int> &v){
	int n = v.size();
	for(int i=0;i<n;i++){
		int minElementIndex = i;
		for(int j=i+1;j<n;j++){
			if(v[j] < v[minElementIndex]){
				minElementIndex = j;
			}
		}
		swap(v[i],v[minElementIndex]);
	}
}

void insertion_sort(vector<int> &v){
	int n= v.size();
	for(int i=1;i<n;i++){
		int temp = v[i];
		int j = i-1;
		while(j>=0 and v[j] > temp){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = temp;
	}
}

void merge(vector<int> &v , int s, int mid ,int e){
	int p = s;
	int q = mid+1;
	vector<int> A(e-s+1);
	int k=0;
	for(int i=s ;i<=e ;i++ ){
		if(p>mid){
			A[k++] = v[q++];
		}
		else if(q>e){
			A[k++] = v[p++];
		}
		else if(v[p] < v[q]){
			A[k++] = v[p++];
		}
		else{
			A[k++] = v[q++];
		}
	}
	for(int i =0 ;i<A.size(); i++){
		v[s++]  = A[i];
	}
}
void merge_sort(vector<int> &v , int s,int e){
	if(s>=e){
		return ;
	}
	int  mid = (s+e)/2;
	
	merge_sort(v,s,mid);
	merge_sort(v,mid+1,e);
	merge(v,s,mid,e);
	
}
void print(vector<int> &v){
	for(auto ele : v){
		cout<<ele<<" ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> v = {4, 5 ,1 , 55, 0};
		merge_sort(v,0,v.size()-1);
		print(v);

	}
return 0;
}

