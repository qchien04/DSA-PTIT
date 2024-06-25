#include<bits/stdc++.h>

using namespace std;

typedef struct {
	char msnv[10];
	char ten[20];
	float hsl;
	int luong;
	int pc;	
} nv;

int main(){
	nv *a;
	a=new nv[5]; 
	float min=9999999,max=0;
	int b1,b2; 
	for(int i=0;i<10;i++){
		cin>>*(a+i)->msnv>>*(a+i)->ten>>*(a+i)->hsl>>*(a+i)->luong>>*(a+i)->pc;
		float sum=a[i]->luong*a[i]->hsl+a[i]->pc;
		if(sum>max){
			max=sum;
			b1=i;
		} 
		if(sum<min){
			min=sum;
			b2=i;
		} 
	}
	cout<<a[b1]->msnv<<endl<<a[b1]->ten<<endl<<a[b1]->hsl<<endl<<a[b1]->luong<<endl<<a[b1]->pc<<endl;
	cout<<a[b2]->msnv<<endl<<a[b2]->ten<<endl<<a[b2]->hsl<<endl<<a[b2]->luong<<endl<<a[b2]->pc<<endl;
	delete[]a;
	
	return 0;
}
