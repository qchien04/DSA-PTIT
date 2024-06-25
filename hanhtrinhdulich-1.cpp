#include<bits/stdc++.h>

using namespace std;
int n;
int minn=INT_MAX;
int vs[100];
int a[100][100];
int pa[100];
int fopt=INT_MAX;
int check(int pa[], int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
    s = s + a[pa[i]][pa[i+1]];
    return (s);
}
void hoanvi(int m,int d){
	if(m>n){
		int tmp=check(pa,n);
		if(tmp<fopt){
			fopt=tmp;
		}
		return;
	}
	for(int i=1;i<=n;i++){
		if(vs[i]==0){
			vs[i]=1;
			pa[m]=i;
			d+=a[pa[m-1]][pa[m]];
			int tmp=d+minn*(n-m);
			if(tmp<fopt){
				hoanvi(m+1,d);
			}
			d-=a[pa[m-1]][pa[m]];
			vs[i]=0;
		}
	}
	
}
void khoitao(){
	for(int i=1;i<=n;i++){
		pa[1]=i;
		vs[i]=1;
		hoanvi(2,0);
		for(int i=1;i<=n;i++) vs[i]=0;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		minn=INT_MAX;
		fopt=INT_MAX;
		cin>>n;
		for(int i=1;i<=n;i++) vs[i]=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
				if(i!=j){
					minn=min(minn,a[i][j]);
				}
			}
		}
		khoitao();
		cout<<fopt<<endl;
	}
}
