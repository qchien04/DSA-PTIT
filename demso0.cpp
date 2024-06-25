#include <bits/stdc++.h>
using namespace std;
long long test(long long a[],long long b[],long long n){
	long long l=0,r=n-2;
	long long ans,res=9999999;
	bool fl=false;
	long long mid=(r-l)/2+l;
	while(l<=r){
		if(a[mid]==b[mid]){
			l=mid+1;
			mid=(r-l)/2+l;
		}
		else{
			fl=true;
			ans=mid;
			res=min(ans,res);
			r=mid-1;
			mid=(r-l)/2+l;
		}
	}
	if(fl) 	return res;
	else return n-1;
}
int main(){
	int t;
	cin>>t;
	while(t--){	
    	int m,n,k;
   		cin>>n;
    	int a[n],b[n];
    	int dem=0;
    	for(int i=0;i<n;i++) {
    		cin>>a[i];
    		if(!a[i]) dem++;
		}
    	cout<<dem<<endl; 
	}

    return 0;
}


