#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int dinh,canh;
	cin>>dinh>>canh;
	map<int,vector<int> > ds;
	long long sum=0;
	for(int i=0;i<canh;i++){
		int s,e;
		cin>>s>>e;
		ds[s].push_back(e);
		ds[e].push_back(s);
	}
	for(auto x:ds){
        int it=x.first;
        cout<<it<<": ";
        for(int i=0;i<ds[it].size();i++){
            cout<<ds[it][i]<<" ";
        }
        cout<<endl;
	}
    }

}


