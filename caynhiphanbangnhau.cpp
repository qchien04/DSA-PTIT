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
bool duyetcaytheomuc(Node *root1,Node *root2){
	queue<Node*> q1;
	q1.push(root1);
	queue<Node*> q2;
	q2.push(root2);
	while(q1.size()&&q2.size()){
		Node *tmp1=q1.front();
		q1.pop();
		Node *tmp2=q2.front();
		q2.pop();
		if(tmp1->val!=tmp2->val) return false;
		if(tmp1->l) q1.push(tmp1->l);
		if(tmp1->r) q1.push(tmp1->r);
		if(tmp2->l) q2.push(tmp2->l);
		if(tmp2->r) q2.push(tmp2->r);
		if(q1.size()!=q2.size()) return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root1=NULL;
		Node *root2=NULL;
		while(n--){
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(root1==NULL){
				root1=new Node(u);
				makeNode(root1,u,v,c);
				root1->val=u;
			}
			else{
				insert(root1,u,v,c);
			}
		}
		cin>>n;
		while(n--){
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(root2==NULL){
				root2=new Node(u);
				makeNode(root2,u,v,c);
				root2->val=u;
			}
			else{
				insert(root2,u,v,c);
			}
		}
	//	cout<<"done"<<endl;
		if(duyetcaytheomuc(root1,root2)) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

