#include <bits/stdc++.h>
using namespace std;
int n,k;
bool ok;
int vs[100];
int a[100][100];
int cheo1[100],cheo2[100];
int cot[100];
int fopt=0;
void hoanvi(int i){
	for(int j=1;j<=n;j++){
		if(cot[j]&&cheo1[i+j-1]&&cheo2[i-j+n]){
			cot[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+n]=0;
			if(i==n){
				fopt++;
			}
			hoanvi(i+1);
			cot[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+n]=1;
		}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--){
		fopt=INT_MIN;
		cin>>n;
		fopt=0;
		for(int j=1;j<=n;j++){
			cot[j]=1;
		}
		for(int i=1;i<=2*n;i++){
			cheo1[i]=1;
			cheo2[i]=1;
		}
		hoanvi(1);
		cout<<fopt<<endl;
	}
}
