#include<bits/stdc++.h>

using namespace std;
bool isletter(char c){
	if(c<='Z'&&c>='A') return true;
	if(c<='z'&&c>='a') return true;
	return false;
}
bool issymbol(char x){
	if(x=='+'||x=='-'||x=='*'||x=='/'||x=='^') return true;
	return false;
}
int priority(char x){
	if(x=='+'||x=='-') return 1;
	if(x=='*'||x=='/') return 2;
	else return 3;
}
struct Node{
	int val;
	Node *l,*r;
	Node (int x){
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
int height(Node *root){
	if(root==NULL) return 0;
	return 1+max(height(root->l),height(root->r));
}
bool allofleafequal(Node *root,int h,int lv){
	if(root==NULL) return true;
	if(root->l==NULL&&root->r==NULL&&lv<h) return false;
	return allofleafequal(root->l,h,lv+1)&&allofleafequal(root->r,h,lv+1);
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
		int h=height(root);
//		cout<<"chieu cao "<<h<<endl;
		if(allofleafequal(root,h,1)) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

