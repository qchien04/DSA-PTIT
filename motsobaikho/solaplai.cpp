#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b){
	while(b!=0){
		long long cmp=b;
		b=a%b;
		a=cmp;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
	cin>>a>>x>>y;
	long long uc=ucln(x,y);
	while(uc--)cout<<a;
	cout<<endl;
		
	}
}





