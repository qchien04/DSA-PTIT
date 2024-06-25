#include <bits/stdc++.h>
using namespace std;
int test(int a[],int b[],int n){
	int l=0,r=n-2;
	int ans,res=INT_MAX;
	int mid=(r-l)/2+l;
	while(l<=r){
		if(a[mid]==b[mid]){
			l=mid+1;
			mid=(r-l)/2+l;
		}
		else{
			ans=mid;
			res=min(ans,res);
			r=mid-1;
			mid=(r-l)/2+l;
		}
	}
	return res;;
}
int main(){
	int t;
	cin>>t;
	while(t--){	
    	int m,n,k;
   		cin>>n;
    	int a[n],b[n];
    	int res;
    	for(int i=0;i<n;i++) cin>>a[i];
    	for(int i=0;i<n-1;i++) cin>>b[i];
    	res=test(a,b,n);
    	cout<<res+1<<endl;
    	 
	}

    return 0;
}
