#include <bits/stdc++.h>

const int mod=1000000007;
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[k+1];
        for(int i=0;i<=k;i++){
            b[i]=0;
        }

        b[0]=1;
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                if(i>=a[j]){
                    b[i]=(b[i]+b[i-a[j]])%mod;
                }
            }
        }
        //for(int i=1;i<=k;i++) cout<<b[i]<<endl;
       // cout<<n<<" "<<k<<endl;
        cout<<b[k]<<endl;
	}
}


