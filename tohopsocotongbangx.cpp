#include<bits/stdc++.h>
using namespace std;

int n,k,s,p,vs[100],sum,dem;
int b[100],a[100];
int prime[201];
vector<string> ans;
void tohopso(int m,int pos,int sum){
    if(sum==k){
        string res;
        res+="[";
        for(int l=1;l<m;l++){
            res+=to_string(b[a[l]])+" ";
        }
        res.pop_back();
        res+="]";
        ans.push_back(res);
        return;
    }
	for(int i=pos;i<=n;i++){
        a[m]=i;
        if(sum+b[i]<=k) tohopso(m+1,i,sum+b[a[m]]);
	}
}
void tohopso1(int m,int pos,int sum){
    for(int i=m;i<=n;i++){
    	a[m]=i;
    	if(sum+b[a[m]]==k){
    		string res;
	        res+="[";
	        for(int l=1;l<m;l++){
	            res+=to_string(b[a[l]])+" ";
	        }
	        res.pop_back();
	        res+="]";
	        ans.push_back(res);
		}
		if(sum+b[i]<=k) tohopso(m+1,i,sum+b[a[m]]);
	}
}
void khoitao(){
	tohopso1(1,1,0);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ans.clear();
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        khoitao();
        if(ans.size()>0){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i];
            }
        }
        else cout<<"-1";
        cout<<endl;
    }

}
