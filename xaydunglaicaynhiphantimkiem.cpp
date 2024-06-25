#include<bits/stdc++.h>

using namespace std; 
struct Node{
	int val;
	Node *l,*r;
	char pre_status; 
	Node (int x){
		pre_status='0';
		val=x;
		l=NULL;
		r=NULL;
	}
};
void pre(Node* root){
	if(root==NULL) return;
	cout<<root->val<<" ";
	pre(root->l);
	pre(root->r);
}
Node* build(Node *root,int x){
	if(root==NULL){
		Node *r=new Node(x);
		return r;
	}
	if(x<root->val){
		root->l=build(root->l,x);
	}
	else root->r=build(root->r,x);
	return root;
}
void duyetcaytheomuc(Node *root){
	Node* a=new Node(a[0]);
	queue<Node*> q;
	q.push(a);
	while(q.size()){
		Node *tmp=q.front();
		q.pop();
		cout<<tmp->val<<" ";
		if(tmp->r) q.push(tmp->r);
		if(tmp->l) q.push(tmp->l);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		Node* root=NULL;
		for(int i=0;i<n;i++) {
			int x;
			cin>>x;
			root=build(root,x);
		}
		cout<<"ok";
		pre(root);
		cout<<endl;
	}
}






