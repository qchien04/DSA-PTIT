#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
		int n;
		cin>>n;
		int a[n+1];
		a[0]=1;
		int x=0,y=0,z=0;
		for(int i=1;i<=n;i++){
			a[i]=min(a[x]*2,min(a[y]*3,a[z]*5));
			if(a[x]*2==a[i]) x++;
			if(a[y]*3==a[i]) y++;
			if(a[z]*5==a[i]) z++;
		}
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
		cout<<a[n-1]<<endl;
    }
}

