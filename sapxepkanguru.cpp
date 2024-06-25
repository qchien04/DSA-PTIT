#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0,r=n/2;
		int dem=0;
		while(l<r&&l<n&&r<n){
			if(a[l]*2<=a[r]){
				dem++;
				r++;l++;
			}
			else r++;
		}
		cout<<n-dem<<endl;
	}
}


