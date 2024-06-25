#include<bits/stdc++.h>
using namespace std;
//xanh trang do
int main(){	
	int n;
	cin>>n;
	string a;
	int d=0,x=0,t=0;
	cin>>a;
	for(int i=0;i<n;i++){
		if(a[i]=='T') t++;
		if(a[i]=='X') x++;
		if(a[i]=='D') d++;
	}
	int dem=0;
	int dem1=0,dem2=0;
	for(int i=0;i<x;i++){
		if(a[i]!='X') dem++;
		if(a[i]=='D') dem1++;
	}
	for(int i=n-d;i<n;i++){
		if(a[i]!='D') dem++;
		if(a[i]=='X') dem2++;
	}
	cout<<dem-min(dem1,dem2)<<endl;
	
}

