#include <bits/stdc++.h>
using namespace std;

long long sol(string s) {
    int len=s.size();
    long long res= 0;
    long long m= 1;
    for (int i=len-1;i>=0;i--) {
        res += (s[i]-'0')*(i+1)*m;
        m=m*10+1;
    }
    return res;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
	    cin>>s;
	    long long sum=sol(s);
	    cout<<sum<<endl;	
	}
    return 0;
}


