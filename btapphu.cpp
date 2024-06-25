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

Node* build(int a[],int l,int r,int n){
	if(l>=n||l>r) return NULL;
	Node *root=new Node(a[l]);
	if(l==r) return root;
	l++;
	int ans=r+1;
	for(int i=l;i<=r;i++){
		if(a[i]>=root->val){
			ans=i;
			break;
		}
	}
	root->l=build(a,l,ans-1,n);
	root->r=build(a,ans,r,n);
	return root;
}
bool isleaf(Node *root){
	if(root->r==NULL&&root->l==NULL) return true;
	else return false;
}
void inorder(Node *root){
	if(root==NULL) return;
	inorder(root->l);
	if(isleaf(root)) cout<<root->val<<" ";
	inorder(root->r);
}
void preorder(Node *root){
	if(root==NULL) return;
	if(isleaf(root)) cout<<root->val<<" ";
	inorder(root->l);
	inorder(root->r);
}
void posorder(Node *root){
	if(root==NULL) return;
	inorder(root->l);
	inorder(root->r);
	if(isleaf(root)) cout<<root->val<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int idx=0;
		Node *root=build(a,0,n-1,n);
		posorder(root);
		cout<<endl;
	}
}

