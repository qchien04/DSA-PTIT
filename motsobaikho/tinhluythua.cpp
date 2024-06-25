#include <bits/stdc++.h>
using namespace std;

long long luythua(long long x,long long y,long long p){
	if(y==0) return 1;
	if(y%2==0){
		long long t=luythua(x,y/2,p);
		return (t*t)%p;
	}
	else{
		long long t=luythua(x,y-1,p);
		return (t*x)%p;
	}	
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x,y,p;
        cin >> x >> y>>p;
		long long kq=luythua(x,y,p);
		cout<<kq<<endl;
    }

    return 0;
}
 
