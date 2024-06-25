#include<bits/stdc++.h>
using namespace std;
int a[100],n,k,vs[100];
string *s=new string [n+1];
void npdq(int m){
	if(m>n){
		for(int i=1;i<=n;i++){
			if(a[i])cout<<"B";
			else cout<<"A";
		}
		cout<<" ";	
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
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		khoitao();
		cout<<endl;
		
	}

}

