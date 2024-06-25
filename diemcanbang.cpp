#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		int s=0;
		int res=-1;
		for(int i=0;i<n;i++){
			sum-=a[i];
			if(s==sum){
				res=i+1;
				break;
			}
			s+=a[i];	
		}
		cout<<res<<endl;
	}

}

