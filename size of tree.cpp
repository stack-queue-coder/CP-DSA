#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int totNodes(Node *root){
	if(root == NULL){
		return 0;
	}
	return 1 + totNodes(root->left) + totNodes(root->right);
}

int n ;

int maxBin(Node * root ){
	if(root != NULL){
		n = max(n , root->key);
//		cout<<n<<" ";
		maxBin(root->left );
		maxBin(root->right);
	}
	return n;
}

int getMax(Node *root){
	if(root == NULL){
		return INT_MIN;
	}
	else{
		return max(root->key , max(getMax(root->left) , getMax(root->right)));
	}
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(5);
	
//	n = root->key ;
	cout<<getMax(root);
//	cout<<totNodes(root);
}
