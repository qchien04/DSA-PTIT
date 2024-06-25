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
bool allfatherhave2leaf(Node *root){
	if(root==NULL) return true;
	if((root->l==NULL&&root->r!=NULL)||(root->l!=NULL&&root->r==NULL)) return false;
	return allfatherhave2leaf(root->l)&&allfatherhave2leaf(root->r);
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
//		if(allofleafequal(root,h,1)){
//			cout<<"la cung muc"<<endl;
//		}
		if(allfatherhave2leaf(root)) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

