#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
	int key;
	struct Node *left;
	struct Node *right;
	Node(int k){
		key = k;
		left = right = NULL;		
	}
};

void kdist(Node *root , int k){
	if(root == NULL){
		return ;
	}
	else if(k == 0){
		cout<<root->key<<" ";
	}
	else{
		kdist(root->left , k-1);
		kdist(root->right , k-1);
	}
}


int main(){
	Node *root = new Node(15);
	root->left = new Node(20);
	root->right = new Node(55);
	root->left->left = new Node(70);
	root->left->right = new Node(29);
	root->right->left = new Node(100);
	
	kdist(root , 2);
return 0;
}
 
