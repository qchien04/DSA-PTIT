#include<bits/stdc++.h>
using namespace std;

int a[100],n,k;
void quaylui(int n){
	if(n==1){
		cout<<"["<<a[0]+a[1]<<"]"<<endl;
	} 
	else{
		cout<<"[";
		for(int i=0;i<n;i++){
			a[i]=a[i]+a[i+1];
			cout<<a[i];
			if(i!=n-1)cout<<" ";
		}
		cout<<"]";
		cout<<endl;
		quaylui(n-1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"[";
		for(int i=0;i<n;i++){
			cout<<a[i];
			if(i!=n-1)cout<<" ";
		}
	cout<<"]";
	cout<<endl;
	if(n>1)quaylui(n-1);		
	}
	
	return 0;
}


