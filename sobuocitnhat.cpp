#include <iostream>
#include <vector>

using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+2];
		int b[n+2];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=1;
		}
		int ans=-1e9;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[j]<=a[i]){
					b[i]=max(b[i],b[j]+1);
				}
			}
			ans=max(ans,b[i]);
		}
		cout<<n-ans<<endl;
	}
}
