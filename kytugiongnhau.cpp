#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int a,b,c;
		int lis[n+2];
		cin>>a>>b>>c;
		lis[1]=a;
		for(int i=2;i<=n;i++){
			if(i%2==0){
				lis[i]=min(lis[i-1]+a,lis[i/2]+c);
			}
			else{
				lis[i]=min(lis[i-1]+a,lis[(i+1)/2]+c+b);
			}
		}
		cout<<lis[n]<<endl;
	}
}

