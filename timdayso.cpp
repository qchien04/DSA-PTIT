#include<bits/stdc++.h>

using namespace std;

int check(int a[],int tes,int n){
	for(int i=0;i<n;i++){
		if(a[i]/tes==a[i]/(tes+1)){
			return 0;
		}
	}
	return 1;
}
int main() {
    int n;
    int ans=0;
    int num=INT_MAX;
    cin>>n;int a[n+1];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	num=min(num,a[i]);
	}
	for(int i=num;i>0;i--){
		if(check(a,i,n)){
			for(int j=0;j<n;j++){
				ans+=a[j]/(i+1)+1;
			}
			break;
		}
	}
	cout<<ans<<endl;
    return 0;
}
