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
Node* build2(int *a,int n){
	if(n<=0) return NULL;
	Node *root=new Node(a[0]);
	int idx=n;
	for(int i=0;i<n;i++){
		if(a[i]> a[0]){
			idx=i;
			break;
		}
	}
	root->l=build2(a+1,idx-1);
	root->r=build2(a+idx,n-idx);
	return root;
}
int dem(Node *root){
	if(root==NULL||(root->l==NULL&&root->r==NULL)) return 0;
	else return 1+dem(root->l)+dem(root->r);
}
void posorder(Node *root){
	if(root==NULL) return;
	posorder(root->l);
	posorder(root->r);
	cout<<root->val<<" ";
}
int height(Node *root){
	if(root==NULL) return 0;
	return 1+max(height(root->l),height(root->r));
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		Node *root=build2(a,n);
	//	posorder(root);
		cout<<height(root)-1<<endl;
	}
}

