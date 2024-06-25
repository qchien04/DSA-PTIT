#include<bits/stdc++.h>

using namespace std;
bool isletter(char c){
	if(c<='Z'&&c>='A') return true;
	if(c<='z'&&c>='a') return true;
	return false;
}
bool issymbol(string x){
	if(x=="+"||x=="-"||x=="*"||x=="/"||x=="^") return true;
	return false;
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
void inorder(Node *root){
	if(root==NULL) return;
	inorder(root->l);
	cout<<root->val<<" ";
	inorder(root->r);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n+1];
		for(int i=0;i<n;i++) cin>>s[i];
		queue<Node*> st;
		Node *root;
		for(int i=n-1; i>=0;i--){
			if(!issymbol(s[i])){
                int nums=stoi(s[i]);
                st.push(new Node(nums));
			}
			else{
				Node *a=st.front();
				st.pop();
				Node *b=st.front();
				st.pop();
				if(s[i]=="-"){
					Node *tmp=new Node(b->val-a->val);
					st.push(tmp);
				}
				else if(s[i]=="+"){
					Node *tmp=new Node(b->val+a->val);
					st.push(tmp);
				}
				else if(s[i]=="*"){
					Node *tmp=new Node(b->val*a->val);
					st.push(tmp);
				}
				else if(s[i]=="/"){
					Node *tmp=new Node(b->val/a->val);
					st.push(tmp);
				}
			}
		}
		root=st.front();
		cout<<root->val<<endl;
	}
}


