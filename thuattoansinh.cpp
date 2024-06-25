#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,vs[100];
bool check(){
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i+1]) return false;
	}
	return true;
}
void npdq(int m){
	if(m>n){
		if(check()){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;	
		}
		return;
	}
	for(int i=0;i<=1;i++){
		a[m]=i;
		npdq(m+1);
	}
}
void khoitao(){
	npdq(1);
}
int main(){
	cin>>n;
	khoitao();

}

