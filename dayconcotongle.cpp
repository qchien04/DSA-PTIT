#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,b[100];
vector<string> ans;
void nhiphan(int m){
    if(m>n){
        int sum=0;
        for(int l=1;l<=n;l++){
            if(a[l]==1){
                sum+=b[l];
            }
        }
        if(sum%2==1){
            string res;
            for(int l=1;l<=n;l++){
                if(a[l]==1){
                    res+=to_string(b[l])+" ";
                }
            }
            ans.push_back(res);
        }
        return;
    }
	for(int i=0;i<=1;i++){
		a[m]=i;
		nhiphan(m+1);
	}
}
void khoitao(){
	nhiphan(1);
}
int main(){
	int t;cin>>t;

	while(t--){
		a[0]=0;
		ans.clear();
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		sort(b+1,b+1+n,greater<int>());
		khoitao();
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<endl;
		}

	}

}



