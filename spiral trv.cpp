#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
	int key;
	struct Node *left;
	struct Node* right;
	Node(int x){
		key =  x;
		left =  right  =  NULL;
	}
};

void trv(Node *root){
	if(root == NULL){
		return ;
	}
	stack<Node*>s1;
	stack<Node*>s2;
	s1.push(root);
	
	while(!s1.empty() or !s2.empty()){
		while(!s1.empty()){
			Node* curr = s1.top();
			s1.pop();
			cout<<curr->key<<"  ";
			if(curr->right != NULL){
				s2.push(curr->right);
			}
			if(curr->left != NULL){
				s2.push(curr->left);
			}
		}
		while(!s2.empty()){
			Node* curr = s2.top();
			s2.pop();
			cout<<curr->key<<"  ";
			if(curr->left){
				s1.push(curr->left);
			}
			if(curr->right){
				s1.push(curr->right);
			}
		}
	}
}


int main(){
	
	Node *root = new Node(12);
	root->left = new Node(53);
	root->right = new Node(44);
	root->left->left = new Node(52);
	root->left->right = new Node(42);
	root->right->left = new Node(32);
	root->right->right = new Node(21);
	
	trv(root);
return 0;
}

