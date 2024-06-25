#include<bits/stdc++.h>
using namespace std; 
void lonnhat(int s,int d){//nho nhatko p lon nhat
	if(s>9*d||s==0){
    	cout<<"-1 ";
    	return;
	}
	int a[d+1];
	int sum=s-1;
	for(int i=0;i<d-1;i++){
		if(sum<9) {
			a[i]=sum;
			sum=0;
		}
		else {
			a[i]=9;
			sum-=9;
		}
	}
	a[d-1]=sum+1;
	for(int i=d-1;i>=0;i--){
		cout<<a[i];
	}
	cout<<" ";
}
void nhonhat(int s,int d){
	if(s>9*d||s==0){
    	cout<<"-1 ";
    	return;
	}
	int a[d+1];
	for(int i=0;i<d;i++){
		if(s<9) {
			a[i]=s;
			s=0;
		}
		else {
			a[i]=9;
			s-=9;
		}
	}
	for(int i=0;i<d;i++){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
    int s,d;
    cin>>d>>s;
    lonnhat(s,d);
	nhonhat(s,d);   
	cout<<endl;
    
}


