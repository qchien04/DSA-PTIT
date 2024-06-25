// tim hang hoac cot co tong cac phan tu lon nhat sau do nhan voi bac cua ma tran vuong, tru di tong cac phan tu cua ma tran ban dau;

#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		vector < vector<int> > mt (n,vector<int>(n));
		int sum=0,maxx=0;
		int hang[n]={0},cot[n]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>mt[i][j];
				sum+=mt[i][j];
				hang[i] += mt[i][j];
	            cot[j] += mt[i][j];
	            int tt=maxx;
	            maxx=max(hang[i],cot[j]);
	            maxx=max(tt,maxx);
			}
		}
		cout<<maxx*n-sum<<endl;
	}
}
