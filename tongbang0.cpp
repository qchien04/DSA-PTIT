#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n;
		k=0;
		long long a[n];
		int check0=0;
		int ans=0;
		for(int i=0;i<n;i++) {
			cin>> a[i];
			if(a[i]==0) check0=1;
		}
		if(k==0&&check0==1){
			cout<<"YES"<<endl;
		}
		else if(k==0&&check0==0){
			cout<<"NO"<<endl;
		}
		else{
			long long j=0;
			long long sum=0;
			while(a[j]+sum<k){
				sum+=a[j];
				j++;	
			}
			long long dis=j;
			for(long long i=j;i<n;i++){
				sum=sum+a[i];
				dis++;
				if(sum==k) ans=1;
				else if(sum > k){
					int dem=0;
					while(sum>k){
						sum=sum-a[i-dis+1];
						dis--;
					}
					if(sum==k) ans=1;
				}
			}
			if(ans==1) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;	
		}
	}

}

