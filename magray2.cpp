#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
int main() {
    int t;
    cin >> t;
    while (t--) {
    	string s;
        cin>>s;
    	string res;
        res+=s[0];
        for(int i=1;i<s.size();i++){
        	if(s[i]=='1'){
        		if(res[i-1]=='0') res+="1"; 
        		else res+="0";
			}
        	else res+=res[i-1];		
		}
		cout<<res<<endl;
    	
    }
    return 0;
}

