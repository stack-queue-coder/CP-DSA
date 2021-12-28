#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct MyHash
{
	int BUCKET;
	list <int> *table;
	MyHash(int b){
		BUCKET = b;
		table = new list<int>[BUCKET];
	}
	void insert(int key){
		int i = key % BUCKET;
		table[i].push_back(key);
	}
	void remove(int key){
		int i = key%BUCKET;
		table[i].remove(key);
	}
	bool search(int key){
		int i = key%BUCKET;
		for(auto x: table[i]){
			if(x == key){
				return true;
			}
			return false;
		}
		
	}
};

int main(){
	int t;
	
	cin >> t;
	while(t--){
		int b;
		cin >> b;
		MyHash mh(b);
	    mh.insert(10);
	    mh.insert(20);
	    mh.insert(15);
	    mh.insert(7);
	    cout << mh.search(100) << endl;
	    mh.remove(15);
	    cout << mh.search(150);
	}
return 0;
}

