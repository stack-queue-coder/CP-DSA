#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node{
	int key;
	struct Node *left;
	struct Node *right;
	Node(int x){
		key = x;
		left = right = NULL;
	}
};
int preIndex = 0;
Node *cTree(int in[] , int pre[] , int is , int ie){
	if(is > ie){
		return NULL;
	}
	Node *root = new Node(pre[preIndex]);
	preIndex++;
	int inIndex;
	for(int i = is ;i <=ie ; i++){
		if(in[i] == root->key){
			inIndex = i;
			break;
		}
	}
	root->left = cTree(in , pre , is , inIndex -1);
	root->right = cTree(in , pre , inIndex +1, ie);
	return root;
}

void preOrder(Node*root){
	if(root == NULL){
		return;
	}
	cout<<root->key<<"  ";
	preOrder(root->left);
	preOrder(root->right);
}


void printSpiral(Node *root){
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
		
	Node *root=new Node(13);
	root->left=new Node(22);
	root->right=new Node(33);
	root->left->left=new Node(14);
	root->left->right=new Node(5);
	root->right->left=new Node(36);
	root->right->right=new Node(67);
	printSpiral(root);
	
return 0;
}

