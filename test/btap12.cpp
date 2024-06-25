#include<bits/stdc++.h>

using namespace std;
int n;
int a[100001];
int search(int u){
	if(u==a[u]) return u;
	else return a[u]=search(a[u]);
}
void duyet(int i){
	if(i>=n) return;
	duyet(i*2+1);
	cout<<a[i]<<" ";
	duyet(i*2+2);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		duyet(0);
		cout<<endl;
	}
}
