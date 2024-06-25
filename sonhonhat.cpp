#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        if(s>9*d){
        	cout<<"-1"<<endl;
        	continue;
		}
		int a[d+1];
		int sum=s-1;
		for(int i=0;i<d-1;i++){
			if(sum<9) {
				a[i]=sum;
				sum=0;
			}
			else {
				a[i]=9;
				sum-=9;
			}
		}
		a[d-1]=sum+1;
		for(int i=d-1;i>=0;i--){
			cout<<a[i];
		}
		cout<<endl;
    }
}


