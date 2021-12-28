#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	while(t--){

	}
return 0;
}
class MyHash{
	int* hash_table;
	int curr_size;
	
	MyHash(int TABLE_SIZE){
		int hash_table = new[TABLE_SIZE];
		curr_size = 0;
		for(int i=0;i<TABLE_SIZE;i++){
			hash_table[i] = -1;
		} 
	}
	int hash1(int key){
		return key%TABLE_SIZE;
	}
	void search(int key){
		int index = hash1(key);
		while(hash_table[index] != -1){
			if(hash_table[index] == key){
				return 1;//true
			}
			index = (index + 1)%TABLE_SIZE;
			if(index == hash1(key)){
				return 0;//false
			}
		}
		return 0;//fasle;
	}
	
	
	
};

