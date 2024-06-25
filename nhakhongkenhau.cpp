#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	cin>>n;
    	int *a=new int[n+4];
    	for(int i = 0; i < n; i++){
    		cin>> a[i];
		}
		int ans=INT_MIN;
		int *d=new int[n+4];
		for(int i = 0; i < n; i++){
    		d[i]=0;
		}
		d[0]=a[0];
		d[1]=max(a[0],a[1]);
		for(int i=2;i < n; i++){
			d[i]=max(d[i-1],d[i-2]+a[i]);
			ans=max(ans,d[i]);
		}
	
        cout << ans << endl;
    }
}

