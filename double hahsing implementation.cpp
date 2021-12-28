#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TABLE_SIZE 7   // table size (m)
#define PRIME 6   // hash2

class Double_Hash{
	//pointer to any array containing buckets 
	int* hash_table;
	int curr_size;
public:
	//function to check if hash_table is full
	bool is_full(){
		return (curr_size == TABLE_SIZE);
	}
	
	// hash1
	int hash1(int key){
		return (key%TABLE_SIZE);
	}
	//hash2
	int hash2(int key){
		return (PRIME - (key%PRIME));
	}
	
	// constructor ti initiaslise
	Double_Hash(){
		hash_table = new int[TABLE_SIZE];
		curr_size = 0;
		for(int i=0;i<TABLE_SIZE;i++){
			hash_table[i] = -1;
		}
	}
	
	
	//function to insert in  hash_table 
	void Double_Hashing_Insert(int key){
		// exits program if hash table is full
		if(is_full()){
			cout<<"ERROR - CANNOT INSERT "<< key <<"\n";
			cout << "HASH TABLE IS FULL\n";
			return ;
		}
		// provides index for first hash
		int index = hash1(key);
		
		// if collision occurs
		if(hash_table[index] != -1){
			int index2 = hash2(key);
			int i=0;
			while(1){
				int new_index = (index + i * index2) % TABLE_SIZE;
				if(hash_table[new_index] == -1 or hash_table[new_index] == -2){
					hash_table[new_index] = key;
					break;
				}
				i++;
			} 
		}
		else{
			hash_table[index] = key;	
		}
		curr_size++;
	}
	
	//function to search a key in hash_table
	void Double_Hashing_Search(int key){
		int index = hash1(key);
		int index2 = hash2(key);
		int i=0;
		while(hash_table[(index + i*index2) %TABLE_SIZE] != -1){
			if(hash_table[(index + i*index2) %TABLE_SIZE] == key){
				cout <<key<<": Found\n";
				return;
			}
			i++;
			if(((index + i*index2) %TABLE_SIZE) == hash1(key)){
				cout<<key<<": Not Found\n";
				return ;
			}
		}
		cout <<key<<": Not Found\n";
		return ;
	}
	
	// function to delete a key in hash_table
	void Double_Hashing_Delete(int key){
		int index = hash1(key);
		int index2 = hash2(key);
		int i=0;
		while(hash_table[(index + i*index2) %TABLE_SIZE] != -1){
			if(hash_table[(index + i*index2) %TABLE_SIZE] == key){
				hash_table[(index + i*index2) %TABLE_SIZE] = -2;
				cout << "Deleted\n";
				curr_size--;
				return ;
			}
			i++;
			if(((index + i*index2) %TABLE_SIZE) == hash1(key)){
				cout<<"Not Found\n";
				return ;
			}
		}
		cout <<"Not Found\n";
		return ;
	}
	
	// function to display hash_table
	 void displayHash()
	    {
	        for (int i = 0; i < TABLE_SIZE; i++) {
	            if (hash_table[i] != -1)
	                cout << i << " --> "
	                     << hash_table[i] << endl;
	            else
	                cout << i << endl;
	        }
	    }
};
int main(){
	int t;
	cin>>t;
	while(t--){
		Double_Hash dh;
		dh.Double_Hashing_Insert(64);
		dh.Double_Hashing_Insert(36);
		dh.Double_Hashing_Insert(22);
		dh.Double_Hashing_Insert(4);
		dh.Double_Hashing_Insert(66);
		dh.Double_Hashing_Insert(33);
//		dh.Double_Hashing_Insert(11);
		cout << dh.is_full()<<"\n";
		dh.displayHash();
		dh.Double_Hashing_Search(1111);
		dh.Double_Hashing_Search(3226);
		dh.Double_Hashing_Search(23332);
	    dh.Double_Hashing_Search(64);
		dh.Double_Hashing_Search(36);
		dh.Double_Hashing_Search(22);
		dh.Double_Hashing_Search(4);
		
		dh.Double_Hashing_Delete(4);
		dh.Double_Hashing_Delete(6);
		dh.displayHash();
		dh.Double_Hashing_Search(4);
		cout << dh.is_full() <<endl;
		dh.Double_Hashing_Insert(777);
		dh.displayHash();
		dh.Double_Hashing_Search(777);
		dh.Double_Hashing_Insert(888888);	
		dh.Double_Hashing_Search(888888);
		dh.displayHash();
	}
return 0;
}


