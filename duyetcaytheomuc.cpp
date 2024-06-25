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
void duyetcaytheomuc(Node *root){
	queue<Node*> q;
	q.push(root);
	while(q.size()){
		Node *tmp=q.front();
		q.pop();
		cout<<tmp->val<<" ";
		if(tmp->l) q.push(tmp->l);
		if(tmp->r) q.push(tmp->r);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root=NULL;
		while(n--){
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(root==NULL){
				root=new Node(u);
				makeNode(root,u,v,c);
				root->val=u;
			}
			else{
				insert(root,u,v,c);
			}
		}
		duyetcaytheomuc(root);
		cout<<endl;
	}
}

