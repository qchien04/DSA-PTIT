#include <bits/stdc++.h>
using namespace std;
char solve(long long len,long long k,long long n){
	if(len==1||n==1) return 'A';
	if(k==(len+1)/2) return 'A'+n-1;
	if(k<(len+1)/2) return solve((len-1)/2,k,n-1);
	if(k>(len+1)/2) return solve((len-1)/2,k-(len-1)/2-1,n-1);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
		long long len=1;
		cin>>n>>k;
		long long n1=n-1;
		while(n1--){
			len=len*2+1;
		}
		char res=solve(len,k,n);
		cout<<res<<endl;
    }

    return 0;
}

