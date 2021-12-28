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


int height(Node *root){
	if(root == NULL){
		return 0;
	}
	else{
		return max(height(root->left) , height(root->right)) + 1 ;
	}
}
bool bal(Node *root){
	if(root == NULL){
		return true;
	}
	int lh = height(root->left);
	int rh = height(root->right);
	 return (abs(lh - rh) <= 1 and bal(root->left) and bal(root->right));
}

int main(){
	Node *root = new Node(15);
	root->left = new Node(20);
	root->right = new Node(55);
	root->left->left = new Node(70);
	root->left->right = new Node(29);
	root->right->left = new Node(100);
	cout<<bal(root);
return 0;
}

