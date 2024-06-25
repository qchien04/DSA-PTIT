#include <bits/stdc++.h>
using namespace std;
const long long p=1e9+7;
long long luythua(long long x,long long y){
	if(y==0) return 1;
	if(y%2==0){
		long long t=luythua(x,y/2);
		return (t*t)%p;
	}
	else{
		long long t=luythua(x,y-1);
		return (t*x)%p;
	}	
}

int main() {
	int t;
	cin>>t;
    while (t--) {
        long long x,y;
        cin >> x >> y;
       // if(x==0&&y==0) return 0;;
		long long kq=luythua(x,y);
		cout<<kq<<endl;
    }

    return 0;
}
 

