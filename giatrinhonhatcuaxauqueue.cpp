#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string s;
        cin>>k>>s;
        long long ans=0;
        map<char,long long> mp;
        priority_queue<long long> q;
        for(int i=0;i<s.size();i++){
        	mp[s[i]]++;
		}
		for(auto x:mp){
            q.push(x.second);
		}
		while(k--){
            long long tmp=q.top()-1;
            if(tmp<0) tmp=0;
            q.pop();
            q.push(tmp);
		}
		while(!q.empty()){
            ans+=pow(q.top(),2);
            q.pop();
		}
		cout<<ans<<endl;
    }
}
