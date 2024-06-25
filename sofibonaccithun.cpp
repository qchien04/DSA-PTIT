#include <bits/stdc++.h>
using namespace std;
long long const mod=1e9+7;
long long f[1000];
long long  a[2][2],b[2][2],res[2][2];
void nhanmatran(long long a[][2],long long b[][2]){
	for(int i=0;i<2;i++){
    	for(int j=0;j<2;j++){
    		res[i][j]=0;
    		for(int k=0;k<2;k++){
    			res[i][j]=(res[i][j]+(a[i][k]%mod)*(b[k][j]%mod))%mod;			  			
			}
		}	
	}
	for(int i=0;i<2;i++){
    	for(int j=0;j<2;j++){
    		a[i][j]=res[i][j];
		}
	}
}
void luythuamatran(long long a[][2],long long k){
	if(k==1) return ;
	if(k%2==0){
		luythuamatran(a,k/2);
		nhanmatran(a,a);		
	}
	else {
		luythuamatran(a,k-1);
		nhanmatran(a,b);
	}
}
int main() {
    int t;
    cin >> t;
    f[0]=0;
	f[1]=1;
    while (t--) {
		a[0][0]=1;
		a[0][1]=1;
		a[1][0]=1;
		a[1][1]=0;
		b[0][0]=1;
		b[0][1]=1;
		b[1][0]=1;
		b[1][1]=0;
    	int k;
    	cin>>k;
        luythuamatran(a,k);
//    	long long ans;
//    	cout<<"matrix after solution"<<endl;
//    	for(int i=0;i<2;i++){
//	    	for(int j=0;j<2;j++){
//	    		cout<<a[i][j]<<" ";
//			}	
//			cout<<endl;
//		}
		cout<<a[0][1];	
		cout<<endl;		 
    }
    return 0;
}

