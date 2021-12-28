#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class MyHash{
	
	int* hash_table;
	int TABLE_SIZE;
	int curr_size;
public:	
	MyHash(int cap){
		TABLE_SIZE = cap;
		hash_table = new int[TABLE_SIZE];
		curr_size = 0;
		for(int i=0;i<TABLE_SIZE;i++){
			hash_table[i] = -1;
		} 
	}
	// function to check if hashtable is full 
	bool isFull(){
		return (curr_size == TABLE_SIZE);
	}
	//function to calculate hash1 of key
	int hash1(int key){
		return key%TABLE_SIZE;
	}
	// function to search key 
	int search(int key){
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
	
	//function to insert
	void insert(int key){
		if(isFull()){
			cout<<"ERROR - CANNOT INSERT KEY:"<<key<<"\n";
			cout<<"Hashtable is full\n";
			return;
		}
		int index = hash1(key);
		int i = 0;
		while(1){
			//inserting
			if(hash_table[(index + i)%TABLE_SIZE] == -1 or hash_table[(index + 1)%TABLE_SIZE] == -2){
				hash_table[(index + i)%TABLE_SIZE] = key;
				cout<<key<<" INSERTED\n";
				break;
			}
			//if collision occurs
			i++;
		}
		curr_size++;
	}
	
	void display(){
		for(int i=0;i<TABLE_SIZE;i++){
			if(hash_table[i] != -1){
				cout<<i<<"-->"<<hash_table[i]<<"\n";
			}
			else{
				cout <<i<<"\n";
			}
		}
	}
	
};



int main(){
	int t;
	cin >> t;
	while(t--){
		MyHash mh(7);
		mh.insert(11);
		mh.insert(13);
		mh.insert(15);
		mh.insert(3);
		mh.insert(1);
		mh.insert(81);
		mh.insert(31);
		cout<<mh.search(11)<<endl;
		mh.display();
		
	}
return 0;
}


