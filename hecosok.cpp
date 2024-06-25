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
long long chuyenhek(long long s,int k){
    string rs;
	while(1){
        rs=to_string(s%k)+rs;
        s=s/k;
        if(s==0) break;
	}
	return stoll(rs);
}
int main(){
	int t;
	cin>>t;
	while(t--){
            int k;
		string a,b;
		cin>>k>>a>>b;
		long long x=chuyenhe10(a,k);
		long long y=chuyenhe10(b,k);
		cout<<chuyenhek(x+y,k)<<endl;

	}


}


