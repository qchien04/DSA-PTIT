	#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long sum=0;
		long long a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b,b+n);
		for(int i=0;i<n;i++){
			sum+=a[i]*b[n-1-i];
		}
		cout<<sum<<endl;
	}
    return 0;
}



