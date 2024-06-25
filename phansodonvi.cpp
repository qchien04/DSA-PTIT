#include<bits/stdc++.h>
using namespace std;

void btap(long long mau, long long tu){
	if(mau%tu==0){
		cout<<"1/"<<mau/tu;
		return;
	}
	long long maumoi,tumoi;
	long long x=mau/tu+1;
	cout<<"1/"<<x<<" + ";
	maumoi=mau*x;
	tumoi=tu*x-mau;
	btap(maumoi,tumoi);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long mau,tu;
		cin>>tu>>mau;
		btap(mau,tu);
		cout<<endl;
	}
	

}


