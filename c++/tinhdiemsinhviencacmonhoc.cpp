#include<bits/stdc++.h>
using namespace std;
typedef struct {
	string mnh;
	string tenmh;
	int stc;
	double cc,kt,thi;
} mon;

typedef struct {
	string msv;
	string ten;
	string lop;
	int slmon;
	mon *monhoc=new mon[10];
	double dtball=0;
} sv;

void nhapttsv(sv &a){
	scanf("\n");
	getline(cin, a.msv);
	getline(cin, a.ten);
	getline(cin, a.lop);
	cin>>a.slmon;
	for(int i=0;i<a.slmon;i++){
		cin>>a.monhoc[i].tenmh>>a.monhoc[i].cc>>a.monhoc[i].kt>>a.monhoc[i].thi;
	}
}
void nhapttmh(mon &a){
	scanf("\n");
	getline(cin, a.mnh);
	getline(cin, a.tenmh);
	cin>>a.stc;
}

void dtbtungmon(sv a){
	cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" ";
	for(int i=0;i<a.slmon;i++){
		cout<<a.monhoc[i].tenmh<<" Diem TB "<<a.monhoc[i].cc*0.1+a.monhoc[i].kt*0.2+a.monhoc[i].thi*0.7<<endl;
	}
}
void dtblonhon7(sv a,mon b[],int n){
	int ttc=0;
	for(int i=0;i<a.slmon;i++){
		for(int j=0;j<n;j++){
			if(a.monhoc[i].tenmh==b[j].tenmh){
				a.dtball+=(a.monhoc[i].cc*0.1+a.monhoc[i].kt*0.2+a.monhoc[i].thi*0.7)*b[j].stc;
				ttc+=b[j].stc;
			}
		} 
	}
	a.dtball=a.dtball/ttc;
	if(a.dtball>=7) cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<"co diem "<<a.dtball<<endl;
}
int main(){
	int n,m;
	cin>>n>>m;
	mon a[n];
	sv b[m];
	for(int i=0;i<n;i++){
		nhapttmh(a[i]);
	}
	for(int i=0;i<m;i++){
		nhapttsv(b[i]);
	}
	for(int i=0;i<m;i++){
		dtblonhon7(b[i],a,n);
	}
	


}
