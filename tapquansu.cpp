#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,vs[100];

int tohopsinh(int a[],int n,int k,int fl[]){
	int i=k;
	int dem=0;
	while(i>0&&a[i]>=n-k+i){
		i--;
	}
	if(i==0) {
		return k;
	}
	else{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	for(int i=1;i<=k;i++){
		if(fl[a[i]]==0) dem++;
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[k+1];
		a[0]=0;
		int fl[50]={0};
		for(int i=1;i<=k;i++){
			cin>>a[i];
			fl[a[i]]++;
		}
		int res=tohopsinh(a,n,k,fl);
		cout<<res<<endl;
		
	}
}

