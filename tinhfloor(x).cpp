#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){	
    	int n,k;
   		cin>>n>>k;
    	int a[n];
    	for(int i=0;i<n;i++) cin>>a[i];
    	int pos=upper_bound(a,a+n,k)-a; 
    		if(pos==0){
    			cout<<"-1"<<endl;
			}
    		else cout<<pos<<endl;
	}

    return 0;
}
