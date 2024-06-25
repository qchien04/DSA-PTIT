#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n, s = 0;
    cin >> n;
    vector<int> a(n),ma,mi,res; 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());
//    for(int i=0;i<n;i++){
//    	cout<<a[i];
//	}
	for(int i=0;i<n/2;i++){
    	cout<<a[i]<<" ";
    	cout<<a[n-1-i]<<" ";
	}
	if(n%2==1) cout<<a[n/2];
	cout<<endl;
	}
}

