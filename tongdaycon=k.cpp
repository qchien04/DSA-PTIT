#include<bits/stdc++.h>
using namespace std;
int h=0;
bool check(int vs[],int a[],int n,long long k){
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]) sum+=vs[i];
	}
	return sum==k;
}
void npdq(int m,int n,int vs[],int a[],long long k){
	if(m>n){
		if(check(vs,a,n,k)){
			for(int i=1;i<=n;i++){
				if(a[i]) cout<<vs[i]<<" ";
			}
			h++;
			cout<<endl;	
		}
		return;
	}
	for(int i=0;i<=1;i++){
		a[m]=i;
		npdq(m+1,n,vs,a,k);
	}
}
void khoitao(int n,int vs[],int a[],long long k){
	npdq(1,n,vs,a,k);
}
int main(){
	long long n,k;
	cin>>n>>k;
	int a[n],vs[n];
	for(int i=1;i<=n;i++){
		cin>>vs[i];
	}
	khoitao(n,vs,a,k);
	cout<<h<<endl;

}

