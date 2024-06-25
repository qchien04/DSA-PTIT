#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue <string> q;
        q.push("1");
        while(q.size()){
            string tmp=q.front();
            q.pop();
            long long num=stoll(tmp);
            if(num%n==0){
                cout<<num<<endl;
                break;
            }
            q.push(tmp+"0");
            q.push(tmp+"1");
        }
    }
    return 0;
}

