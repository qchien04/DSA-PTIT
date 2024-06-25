#include <bits/stdc++.h>
using namespace std;
int a[10001];
void sang(){
	for(int i=1;i<=10000;i++){
		a[i]=1e9;
	}
	for(int i=1;i<=100;i++){
		a[i*i]=1;
	}
}

int main() {
	int t;
	cin>>t;
	sang();
	for(int i=1;i<=10000;i++){
	//	cout<<"so "<<i<<endl;
		for(int j=1;j<i;j++){
			a[i]=min(a[i],a[i-j]+a[j]);
			//cout<<a[i]<<" ";
		}
	//	cout<<endl;
	}
//	for(int i=1;i<=10;i++){
//		cout<<i<<" ";
//	}
//	cout<<endl;
//	for(int i=1;i<=10;i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	while(t--){
		int n;
		cin>>n;
		cout<<a[n]<<endl;	
	}
    return 0;
}


