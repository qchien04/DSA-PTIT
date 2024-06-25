#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,b[100];
int dem=0;
bool check(){
	for(int i=2;i<=k;i++){
		if(b[a[i]]<b[a[i-1]]) return false;
	}
	return true;
}
void tohopdq(int m){
	if(m>k){
		if(check())dem++;
		return;
	}
	for (int i = a[m-1] + 1; i <= n-k+m; i++){
	a[m] = i; 
	tohopdq(m+1); 
	}
}
void khoitao(){
	tohopdq(1);
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>b[i];
	khoitao();
	cout<<dem<<endl;

}

