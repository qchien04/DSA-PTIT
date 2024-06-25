#include <bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node *next;
};
typedef Node* node;
class llist{
private:
    node start;
public:
	node createNode(int info);
	void insertbegin(int info);
	void insertlast(int info);
	void insertpos(int pos,int info);
	void deletepos(int pos);
	void sortNode();
	void search(int info);
	void update(int pos,int info);//cap nhap ttin
	void display();//duyet dsach
	void btap1(int info);
	llist(){
		start=NULL;
	}
};
node llist::createNode(int info){
	node tmp= new Node();
	tmp->val=info;
	tmp->next=NULL;
	return tmp;
}
void llist::insertbegin(int info){
	node tmp=createNode(info);
	if(start==NULL){
		start=tmp;
	}
	else{
		tmp->next = start;
        start = tmp;
	}
}
void llist::insertlast(int info){
	node tmp=createNode(info);
	tmp->next=NULL;
	if(start==NULL){
		start=tmp;
	}
	else{
		node duyet=start;
		while(duyet->next!=NULL){
			duyet=duyet->next;
		}
		duyet->next=tmp;
	}
}
void llist::display(){
	node tmp=start;
	if(start==NULL){
		cout<<"Danh sach rong"<<endl;
	}
	else{
		while(tmp!=NULL){
			cout<<tmp->val<<"->";
			tmp=tmp->next;
		}
		
		cout<<"NULL"<<endl;
	}
}
void llist::insertpos(int pos,int info){
	node nnode=createNode(info);
	int dem=0;
	node s=start,truoc;
	while(s!=NULL){
		dem++;
		s=s->next;
	}
	if(pos==1){
		if(start==NULL){
			start=nnode;
		}
		else{
			nnode->next = start;
	        start = nnode;
		}
	}
	else if(pos>1&&pos<dem){
		s=start;
		for(int i=0;i<pos;i++){
			truoc=s;
			s=s->next;
		}
		truoc->next=nnode;
		nnode->next=s;
	}
	else{
		cout<<"ERROR"<<endl;
	}

}
void llist::deletepos(int pos){
	if(start==NULL){
		cout<<"ERROR"<<endl;
		return;
	}
	node tmp,s,truoc;
	s=start;
	if(pos==1){
		start=start->next;
		free(s);
		return;
	}
	else{
		int dem=0;
		while(s!=NULL){
			dem++;
			s=s->next;
		}
		if(pos>1&&pos<=dem){
			s=start;
			for(int i=0;i<pos;i++){
				truoc=s;
				s=s->next;
			}
			truoc->next=s->next;
			free(s);
		}
		else{
			cout<<"ERROR"<<endl;
		}
	}
	
}
void llist::sortNode(){
	node s,tmp;
	int a;
	if(start==NULL){
		cout<<"ERROR"<<endl;
		return;
	}
	s=start;
	while(s!=NULL){
		for(tmp=s->next;tmp!=NULL;tmp=tmp->next){
			if(s->val>tmp->val){
				a=s->val;
				s->val=tmp->val;
				s->val=a;
			}
		}
		s=s->next;
	}
}
void llist::search(int info){
	if(start==NULL){
		cout<<"ERROR"<<endl;
		return;
	}
	int pos=0;
	node s=start;
	while(s!=NULL){
		pos++;
		if(s->val==info){
			cout<<pos<<" ";
		}
		s=s->next;
	}
	
}
void llist::update(int pos,int info){
	if(start==NULL){
		cout<<"ERROR"<<endl;
		return;
	}
	node tmp,s,truoc;
	s=start;
	if(pos==1){
		start->val=info;
		return;
	}
	else{
		for(int i=0;i<pos-1;i++){
			if(s==NULL){
				cout<<"ERROR"<<endl;
				return;
			}
			s=s->next;
		}
		s->val=info;
	}
	
}
void llist::btap1(int info){
	node tmp=start;
	if(start==NULL){
		return;
		cout<<"Danh sach rong"<<endl;
	}
	else{
		while(tmp!=NULL){
			if(tmp->val!=info){
				cout<<tmp->val<<" ";
			}
			tmp=tmp->next;
		}
	}
}
int main(){
	llist a;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.insertlast(x);
	}
	cin>>n;
	a.btap1(n);
	
}

