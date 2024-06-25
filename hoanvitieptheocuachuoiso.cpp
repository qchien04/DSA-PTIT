#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
void hvsinh(int a[],int n){
	int i=n-1;
	while(i>0&&a[i]>=a[i+1]){
		i--;
	}
	if(i==0) {
		cout<<"BIGGEST";
		return;
	}
	k=n;
	while(a[i]>=a[k]) k--;
	swap(a[i],a[k]);
	int l=i+1;
	int r=n;
	while(l<r){
		swap(a[r],a[l]);
		r--;
		l++;
	}
	for(int i=1;i<=n;i++) cout<<a[i];
	
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		int id;
		cin>>id>>s;
		n=s.size();
		for(int i=1;i<=n;i++){
			a[i]=s[i-1]-'0';
		}
		cout<<id<<" ";
		hvsinh(a,n);
		cout<<endl;		
	}
	

}

