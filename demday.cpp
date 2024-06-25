#include <bits/stdc++.h>
using namespace std;

long long luythua(long long x,long long y,long long p){
	if(y==1) return 2;
	if(y%2==0){
		long long t=luythua(x,y/2,p);
		return (t%p*t%p)%p;
	}
	else{
		long long t=luythua(x,y-1,p);
		return (t%p*x)%p;
	}
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x,y,p;
        x=2;
		cin>>y;
		p=123456789;
		long long res=luythua(2,y-1,p);
		cout<<res<<endl; 
    }

    return 0;
}
