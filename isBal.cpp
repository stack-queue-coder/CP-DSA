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

int isBal(Node * root){
	if(root == NULL){
		return 0;
	}
	int lh = isBal(root->left);
	if(lh == -1){
		return -1;
	}	
	int rh = isBal(root->right);
	if(rh == -1){
		return -1;
	}
	if(abs(lh - rh) > 1){
		return -1;
	}
	else{
		return max(lh , rh) +1 ;
	}	
}


int main(){
	Node *root = new Node(15);
	root->left = new Node(20);
	root->right = new Node(55);
	root->left->left = new Node(70);
	root->left->right = new Node(29);
	root->right->left = new Node(100);
	cout<<isBal(root);
return 0;
}

