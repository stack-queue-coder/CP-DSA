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
	//                              45
	//							30     70
	//						  20  50 60  80
	int in[] = {20,30,50,45,60,70,80};
	int pre[] = {45,30,20,50,70,60,80};
	Node *root = cTree(in , pre , 0 , 6);
	preOrder(root);
//	printSpiral(root);
	
return 0;
}

