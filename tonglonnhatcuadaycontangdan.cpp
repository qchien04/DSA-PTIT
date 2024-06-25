#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin >> n;
	    int a[n];
	    int ans=-1;
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    int c[n+1];
	    for(int i = 0; i < n; i++){
	        c[i]=a[i];
	    }
	    
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < i; j++){
	            if(a[i] > a[j]){
	                if(c[j]+a[i]>c[i]){
	                	c[i]=a[i]+c[j];
					}
	            }   
	        }
	        ans=max(ans,c[i]);
	    }
	    cout <<ans << endl;
	}
}



