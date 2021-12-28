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

int inorder(Node *root){
	if(root!= NULL){
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}


int main(){
	Node *root = new Node(15);
	root->left = new Node(20);
	root->right = new Node(55);
	root->left->left = new Node(70);
	root->left->right = new Node(29);
	root->right->left = new Node(100);
	
	inorder(root);
return 0;
}

