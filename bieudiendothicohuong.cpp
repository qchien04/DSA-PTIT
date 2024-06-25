#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int> > ds(n+1);
        for(int i=0;i<m;i++){
            int s,e;
            cin>>s>>e;
            ds[s].push_back(e);
        }
        for(int j = 1; j <=n; j++){
            cout<<j<<": ";
            for(int i=0;i<ds[j].size();i++){
                cout<<ds[j][i]<<" ";
            }
            cout<<endl;
        }
    }

}
