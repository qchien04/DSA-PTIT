#include<bits/stdc++.h>
using namespace std;

int a[100],n,k,b[100];
vector<string> ans;
int prime[10001];
void sang(){
	for(int i=0;i<10000;i++) prime[i]=1;
	prime[1]=0;
	prime[2]=1;
	for(int i=1;i<10000;i++){
		if(prime[i]){
			for(int j=i*2;j<10000;j+=i){
				prime[j]=0;
			}
		}
	}
}
void nhiphan(int m){
    if(m>n){
        int sum=0;
        for(int l=1;l<=n;l++){
            if(a[l]==1){
                sum+=b[l];
            }
        }
        if(prime[sum]){
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
	sang();
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



