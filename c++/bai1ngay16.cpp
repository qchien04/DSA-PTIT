#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
public:
	static int objectcount;
	string msv;
    string name;
    string lop;
    string email; 

    SinhVien()
    {
        name="";
        lop="";
        msv="";
        email="";
        
    }
    void nhap()
    {	
		getline(cin,msv);
        getline(cin,name);
        getline(cin,lop);
        getline(cin,email);
        if(msv.size()<2)objectcount++;
    }
    void in()
    {
        cout<<msv<<" "<<name<<" "<<lop<<" "<<email<<endl;
    }
};
int SinhVien::objectcount=0;
bool cmp(SinhVien a, SinhVien b) {
	if(a.lop!=b.lop) return a.lop < b.lop;
    return a.msv < b.msv;
}
int main(){
    SinhVien a[1000];
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
    	a[i].nhap();
	}
	sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
    	a[i].in();
	}
	cout<< SinhVien::objectcount;
    return 0;
}





