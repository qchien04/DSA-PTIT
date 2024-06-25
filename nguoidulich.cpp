#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int vs[100];
int fopt=INT_MAX;
int minn=INT_MAX;
int pa[100];
int n;
int check(){
	int s=0;
	for(int i=1;i<n;i++){
		s+=a[pa[i]][pa[i+1]];
	}
	s+=a[pa[n]][pa[1]];
	return s;
}
void quaylui(int i,int d){
	if(i>n){
		int tmp=check();
		if(tmp<fopt){
			fopt=tmp;
		}
	}
	for(int j=2;j<=n;j++){
		if(vs[j]==1){
			vs[j]=0;
			pa[i]=j;
			d+=a[pa[i-1]][pa[i]];
			int tmp=d+(n-i+1)*minn;
			if(tmp<fopt){
				quaylui(i+1,d);
			}
			d-=a[pa[i-1]][pa[i]];
			vs[j]=1;
		}
	}
}
void khoitao(){
	vs[1]=0;
	pa[1]=1;
	quaylui(2,0);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		vs[i]=1;
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(i!=j)minn=min(minn,a[i][j]);
		}
	}
	khoitao();
	cout<<fopt<<endl;

}
