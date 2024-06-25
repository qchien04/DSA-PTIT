#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
vector<string> ve;
int n;
string chuyenma(string s){
	string res;
    res+=s[0];
    for(int i=1;i<s.size();i++){
    	if(s[i]=='1'){
    		if(s[i-1]=='0') res+="1";
    		else res+="0";
		}
    	else res+=s[i-1];
	}
	return res;
}
void lkenhiphan(int j,string s){
	if(j==n){
        ve.push_back(s);
		return;
	}
	for(int i=0;i<=1;i++){
		lkenhiphan(j+1,s+to_string(i));
	}
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ve.clear();
    	cin>>n;
    	lkenhiphan(0,"");
    	for(int i=0;i<ve.size();i++){
            cout<<chuyenma(ve[i])<<" ";
    	}
        cout<<endl;
    }
    return 0;
}


