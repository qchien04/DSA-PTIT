#include<bits/stdc++.h>
using namespace std;
long long chuyenhe10(string a,int k){
	long long num=0;
	for(int i=0;i<a.size();i++){
		num+=int(a[i]-'0');
		num=num*k;
	}
	return num/k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
        int k;
		string a,b;
		cin>>a>>b;
		long long x=chuyenhe10(a,2);
		long long y=chuyenhe10(b,2);
		cout<<x*y<<endl;

	}


}


