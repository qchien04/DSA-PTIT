#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){	
    	int m,n,k;
   		cin>>m>>n>>k;
    	int a[m];
    	int b[n];
    	int res;
    	for(int i=0;i<m;i++) cin>>a[i];
    	for(int i=0;i<n;i++) cin>>b[i];
    	int pa=0, pb=0;
    	for(int i=0;i<k;i++){
    		if(a[pa]<b[pb]){
    			res=a[pa];
    			pa++;
			}
			else{
				res=b[pb];
				pb++;
			}
		}
		cout<<res<<endl;  
	}

    return 0;
}


