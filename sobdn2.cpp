#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        queue<string> q;
        q.push("1");
        int n;
        cin>>n;
        long long res=0;
        while(q.size()){
        	string s=q.front();
        	if(stoll(s)%n==0){
        		cout<<s<<endl;
        		break;
			}
        	q.pop();
        	q.push(s+"0");
        	q.push(s+"1");
		}
	//	cout<<dem<<endl;
    }
    return 0;
}


