#include<bits/stdc++.h>

using namespace std;
struct Node{
	int val;
	Node *l,*r; 
	Node (int x){
		val=x;
		l=NULL;
		r=NULL;
	}
};
Node* build3(Node *root,int x){
	if(root==NULL){
		Node *r=new Node(x);
		return r;
	}
	if(x<root->val){
		root->l=build3(root->l,x);
	}
	else root->r=build3(root->r,x);
	return root;
}
void posorder(Node *root){
	if(root==NULL) return;
	posorder(root->l);
	posorder(root->r);
	cout<<root->val<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		Node *root=NULL;
		for(int i=0;i<n;i++) {
			cin>>a[i];
			root=build3(root,a[i]);
		}
		posorder(root);
		cout<<endl;
	}
}

