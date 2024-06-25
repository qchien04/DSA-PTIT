#include <bits/stdc++.h>
using namespace std;
long long f[100];
string gapdoi(long long n,long long k){
	if(n==1) return "0";
	if(n==2) return "1";
	if(k<=f[n-2]) return gapdoi(n-2,k);
	else return gapdoi(n-1,k-f[n-2]);
}
int main() {
    int t;
    f[2]=1;
	f[1]=1;
	for(int i=3;i<95;i++) f[i]=f[i-1]+f[i-2];
    cin >> t;
    while (t--) {
        string s;
		long long n,k;
		cin>>n>>k;
		string res=gapdoi(n,k);
		cout<<res<<endl;
		 
    }
    return 0;
}

