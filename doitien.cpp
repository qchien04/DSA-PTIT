#include<stdio.h>


int main(){
	int a,i,sl;
	int t;
	scanf("%d",&t);
	while(t--){
	int b[10]={1000,500,200,100,50,20,10,5,2,1};
	scanf("%d",&a);
	int sum=0;
	for(i=0;i<10;i++){
		sl=a/b[i];
		sum+=sl;
		a=a%b[i];
	}
	printf("%d\n",sum);
	}

}

