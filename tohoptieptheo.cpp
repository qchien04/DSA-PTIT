#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];

void tohopsinh(int a[],int b[],int n,int k){
	int dau[k+1];
	int dem=0;
	int i=k;
	while(i>0&&a[i]>=n-k+i){
		i--;
	}
	if(i==0){
		cout<<k<<endl;
	}
	else{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
		for(int j=1;j<=k;j++){
			if(b[a[j]]==1) dem++;
		}
		cout<<k-dem<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
	a[0]=0;
	int b[100]={0};
	for(int i=1;i<=k;i++){
		cin>>a[i];
		b[a[i]]=1;
	}
	tohopsinh(a,b,n,k);
		
	}

}

