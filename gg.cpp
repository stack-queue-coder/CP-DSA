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


void level(Node *root){
	if(root == NULL) return;
	queue<Node *>q;
	q.push(root);
	q.push(NULL);
	while(q.size() > 1){
		Node *curr = q.front();
		q.pop();
		if(curr == NULL){
			cout<<"\n";
			q.push(NULL);
			continue;
		}
		cout<<curr->key<<" --";
		if(curr->left != NULL) q.push(curr->left);
		if(curr->right != NULL) q.push(curr->right);
	}
	
}

int main(){
	Node *root = new Node(15);
	root->left = new Node(20);
	root->right = new Node(55);
	root->left->left = new Node(70);
	root->left->right = new Node(29);
	root->right->left = new Node(100);
	
	level(root);
return 0;
}

