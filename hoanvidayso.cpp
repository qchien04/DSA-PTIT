#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;

void hvsinh(int b[]){
	for(int i=1;i<=n;i++) a[i]=i;
	while(1){
		for(int i=1;i<=n;i++) cout<<b[a[i]]<<" ";
		cout<<endl;
		int i=n-1;
		while(i>0&&a[i]>a[i+1]){
			i--;
		}
		if(i==0) return;
		k=n;
		while(a[i]>a[k]) k--;
		swap(a[i],a[k]);
		int l=i+1;
		int r=n;
		while(l<r){
			swap(a[r],a[l]);
			r--;
			l++;
		}
	}
}
int main(){
	cin>>n;
	int b[n+1];
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(b+1,b+n+1);
	hvsinh(b);
	return 0;
}

