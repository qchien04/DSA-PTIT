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
	char val;
	Node *l,*r;
	Node (char x){
		val=x;
		l=NULL;
		r=NULL;
	}
};
void inorder(Node *root){
	if(root==NULL) return;
	inorder(root->l);
	cout<<root->val<<"";
	inorder(root->r);
}
void preorder(Node *root){
	if(root==NULL) return;
	cout<<root->val<<" ";
	inorder(root->l);
	inorder(root->r);
}
void posorder(Node *root){
	if(root==NULL) return;
	inorder(root->l);
	inorder(root->r);
	cout<<root->val<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<Node*> st;
		Node *root;
		for(int i=0; i<s.size();i++){
			if(isletter(s[i])) st.push(new Node(s[i]));
			else{
				Node *tmp=new Node(s[i]);
				Node *a=st.top();
				st.pop();
				Node *b=st.top();
				st.pop();
				tmp->l=b;
				tmp->r=a;
				st.push(tmp);				 
			}
		}
		root=st.top();
		inorder(root);
		cout<<endl;
	}
}
