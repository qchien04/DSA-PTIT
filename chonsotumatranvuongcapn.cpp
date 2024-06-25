#include<bits/stdc++.h>
using namespace std;

int n,k,s,p,vs[100],sum,dem;
int b[11][11],a[11];
int prime[201];
vector<string> ans;
void hoanvimatran(int m,int sum){
	for(int i=1;i<=n;i++){
		if(vs[i]){
			a[m]=i;
			vs[i]=0;
			if(m==n){
				if(sum+b[m][i]==k){
					string res;
					for(int l=1;l<=n;l++){
						res+=to_string(a[l])+" ";
					}
					ans.push_back(res);
				}
			}
			hoanvimatran(m+1,sum+b[m][i]);
			vs[i]=1;
		}
	}
}
void khoitao(){
	for(int i=1;i<=n;i++) vs[i]=1;
	hoanvimatran(1,0);
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>b[i][j];
        }
    }
    khoitao();
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }


}
