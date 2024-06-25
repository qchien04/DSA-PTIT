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
map<int,Node*> mp;
void makeNode(Node *root,int u,int v,char c){//them 1 la vao nhanh root
	if(c=='L') root->l=new Node(v);
	else root->r=new Node(v);
}
void insert(Node *root,int u,int v,char c){
	if(root==NULL) return;
	if(root->val==u){
		makeNode(root,u,v,c);
	}
	insert(root->l,u,v,c);
	insert(root->r,u,v,c);
}
Node* build(int a[],int l,int r,int n){
	if(l>r){
		return NULL;		
	}
	int m=(r-l)/2+l;
	Node *root=new Node(a[m]);
	root->l=build(a,l,m-1,n);
	root->r=build(a,m+1,r,n);
	return root;
}
void pre(Node* root){
	if(root==NULL) return;
	cout<<root->val<<" ";
	pre(root->l);
	pre(root->r);
}
void pos(Node* root){
	if(root==NULL) return;
	pos(root->l);
	pos(root->r);
	cout<<root->val<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		Node* root=build(a,0,n-1,n);
		pos(root);
		cout<<endl;
	}
}






