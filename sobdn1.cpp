#include <bits/stdc++.h>
using namespace std;

long long solve(string s){
	if(s.size()==0) return 0;
	if(s[0]>'1') return pow(2,s.size())-1;
	else if(s[0]=='1') return pow(2,s.size()-1)+solve(s.substr(1));
	else return solve(s.substr(1));
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }   
    return 0;
}

