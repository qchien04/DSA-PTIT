#include<bits/stdc++.h>
using namespace std;
typedef struct {
	int mmh;
	string tenmh;
	int stc;
	double cc,kt,thi,demtb;
} monhoc;

typedef struct {
	string msv;
	string ten;
	string lop;
	monhoc *dsmh;
	int k;
	double dtbc;
} sv;
monhoc timmh(monhoc* dsmh,int n,int mamh){
	monhoc kq;
	kq.mmh=-1;
	for(int i=0;i<n;i++){
		if(dsmh[i].mmh==mamh){
			return dsmh[i];
		}
	}
	return kq;
}
int main(){
	int n,m;
	cin>>n;
	monhoc *dsmh=new monhoc[n];
	for(int i=0;i<n;i++){
		cin>>dsmh[i].mmh;
		cin.ignore();
		getline(cin,dsmh[i].tenmh);
		cin>>dsmh[i].stc;
	}
	cin>>m;
	sv *dssv=new sv[m];
	for(int i=0;i<m;i++){
		cin>>dssv[i].msv;
		cin.ignore();
		getline(cin,dssv[i].ten);
		getline(cin,dssv[i].lop);
		int k;
		cin>>k;
		dssv[i].k=k;
		dssv[i].dsmh= new monhoc[k];
		int tongtc=0;
		float tongdiem=0;
		for(int j=0;j<k;j++){
			int mamh;
			cin>>mamh;
			monhoc mh=timmh(dsmh,n,mamh);
			dssv[i].dsmh[j]=mh;
			cin>>dssv[i].dsmh[j].cc;
			cin>>dssv[i].dsmh[j].kt;
			cin>>dssv[i].dsmh[j].thi;
			dssv[i].dsmh[j].demtb=dssv[i].dsmh[j].cc*0.1+dssv[i].dsmh[j].kt*0.2+dssv[i].dsmh[j].thi*0.7;
			tongtc+=mh.stc;
			tongdiem+=dssv[i].dsmh[j].demtb*mh.stc;	
		}
		dssv[i].dtbc=tongdiem/tongtc;		
	}
}
