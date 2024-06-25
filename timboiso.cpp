#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        queue<string> q;
        q.push("9");
        int n;
        cin>>n;
        string res;
        while(q.size()){
        	string s=q.front();
        	if(stoll(s)%n==0){
        		res=s;
        		break;
			}
        	q.pop();	
        	q.push(s+"0");
        	q.push(s+"9");
		}
		cout<<res<<endl;
    }
    return 0;
}

