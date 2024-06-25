#include<bits/stdc++.h>
using namespace std;

int n,k,dem;
bool ok=false;
int b[100],a[100];
int ans=1e9;
void tohopso(int m,int pos,long long sum){
    if(sum==k){
    	ok=true;
        ans=min(ans,m-1);
        return;
    }
	for(int i=pos;i<=n;i++){
        if((sum+b[i]<=k)&&(m<=ans)) tohopso(m+1,i+1,sum+b[i]);
	}
}
void khoitao(){
	tohopso(1,1,0);
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    sort(b+1,b+1+n,greater<int>());
    khoitao();
    if(ok) cout<<ans;
    else cout<<"-1";
    cout<<endl;
}


