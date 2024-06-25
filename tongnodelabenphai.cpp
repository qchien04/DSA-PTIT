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
	if(c=='L') {
		root->l=new Node(v);
		mp[v]=root->l;
	}
	else{
		root->r=new Node(v);
		mp[v]=root->r;
	}
}
bool isleaf(Node *root){
	if(root==NULL) return false;
	if(root->l==NULL&&root->r==NULL) return true;
	return false;
}
int sumrightleaf(Node *root){
	if(root==NULL) return 0;
	int ans=0;
	if(isleaf(root->r)) ans+=root->r->val;
	if (root->r)ans+=sumrightleaf(root->r);	
	if (root->l && !isleaf(root->l))ans += sumrightleaf(root->l);
	return ans;
}
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
		Node *root=NULL;
		while(n--){
			int u,v;
			char c;
			cin>>u>>v>>c;
			if(mp.find(u)!=mp.end()){
				makeNode(mp[u],u,v,c);
			}
			else{
				root=new Node(u);
				mp[u]=root;
				makeNode(root,u,v,c);
				root->val=u;
			}
		}
	//	inorder(root);
	//	cout<<endl;
		cout<<sumrightleaf(root)<<endl;
		mp.clear();
	}
}

