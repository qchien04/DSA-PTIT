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
void build(Node *root,int a[],int n){
	queue<Node*> q;
	q.push(root);
	int cnt=1;
	while(q.size()){
		Node *tmp=q.front();
		q.pop();
		if(cnt<n){
			tmp->l=new Node(a[cnt]);
			cnt++;
			q.push(tmp->l);
		}
		if(cnt<n){
			tmp->r=new Node(a[cnt]);
			cnt++;
			q.push(tmp->r);
		}
	}
}
void inor(Node* root){
	if(root==NULL) return;
	inor(root->l);
	cout<<root->val<<" ";
	inor(root->r);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		Node* root=new Node(a[0]);
		build(root,a,n);
		inor(root);
	}
}
