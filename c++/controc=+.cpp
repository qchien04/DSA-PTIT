#include<bits/stdc++.h>

using namespace std;
int *getrandom(){
	static int r[10];
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		r[i]=rand();
	//	cout<<r[i]<<endl;
	}
	return r;
}

void swap(int *a,int *b){
	int tg;
	tg=*a;
	*a=*b;
	*b=tg;
			
}
void getseconds(unsigned long *par);
void getseconds(unsigned long *par){
	*par=time(NULL);
	return;
}
int main(){
/*	int a,b,x=1,y=2;
	cout<<x<<" "<<y<<endl;
	swap(&x,&y);
	cout<<x<<endl;
	cout<<y<<endl;*/
	//con tro null 
/*	int *ptr=NULL;
	cout<<ptr<<endl;*/
//	int var[3]={5,6,7};
//	int *ptr;
	int i=0;
/*	ptr=var;
	for(i=0;i<3;i++){
		cout<<"dia chi cua mang "<<i<<" = ";
		cout<<ptr<<endl;
		cout<<"gia tri cua mang "<<i<<" = ";
		cout<<*ptr<<endl;
		ptr++;
	}*/
/*	ptr=&var[3-1];
	for(i=3;i>0;i--){
		cout<<"dia chi cua mang "<<i<<" = ";
		cout<<ptr<<endl;
		cout<<"gia tri cua mang "<<i<<" = ";
		cout<<*ptr<<endl;
		ptr--;
	}*/
/*	ptr=var;
	while(ptr<=&var[3-1]){
		cout<<"dia chi cua mang "<<i<<" = ";
		cout<<ptr<<endl;
		cout<<"gia tri cua mang "<<i<<" = ";
		cout<<*ptr<<endl;
		ptr++;
		i++;
	}	*/
/*	int var;
	int *ptr;
	int **pptr;
	var=2000;
	ptr=&var;
	pptr=&ptr;
	cout<<" gia tri var     "<<var<<endl;
	cout<<" gia tri *ptr    "<<*ptr<<endl;
	cout<<" gia tri **pptr  "<<**pptr<<endl;*/
/*	unsigned long sec;
	getseconds(&sec);
	cout<<"nember of seconds : "<<sec<<endl;*/
	int *p;
	p=getrandom();
	for(i=0;i<10;i++){
		cout<<p[i]<<endl;
	}
	cout<<endl;
	return 0;
}






