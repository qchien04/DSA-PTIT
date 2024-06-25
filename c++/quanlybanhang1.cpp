#include<bits/stdc++.h>

using namespace std;

int cntkh = 0, cntmh = 0, cnthd = 0;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;
string intToString(int number) {
	string s;
    stringstream ss;
    ss << number;
    if(number<10){
    	return s="00"+ss.str();
	}
	else if(number>9&&number<100){
		return s="0"+ss.str();
	}
	else return s=ss.str();
}
class KhachHang
{
public:
	string mkh, tenKH, gt, bd, add;	 
public:
	friend class HoaDon;
    friend istream &operator >> (istream &in, KhachHang &a)
    {
        ++cntkh;
        a.mkh = "KH" + intToString(cntkh);
        scanf("\n");
        getline(in, a.tenKH);
        getline(in, a.gt);
        getline(in, a.bd);
        getline(in, a.add);
        KH[a.mkh] = a;
        return in;
    }
};

class MatHang
{
public:
	string mmh, tenMH, dvt;
    int giaMua, giaBan;
public:
    friend class HoaDon;
    friend istream &operator >> (istream &in, MatHang &a)
    {
        ++cntmh;
        a.mmh = "MH" + intToString(cntmh);
        scanf("\n");
        getline(in, a.tenMH);
        getline(in, a.dvt);
        cin >> a.giaMua >> a.giaBan;
        MH[a.mmh] = a;
        return in;
    }
};

class HoaDon
{
public: 
	string mhd, mkh, mmh;
    int sl;
public:
    friend istream &operator >> (istream &in, HoaDon &a)
    {
        ++cnthd;
        a.mhd = "HD" + intToString(cnthd);
        cin >> a.mkh >> a.mmh >> a.sl;
        return in;
    }
    friend ostream &operator << (ostream &out, HoaDon &a)
    {
        out << a.mhd << ' ' 
			<< KH[a.mkh].tenKH << ' ' 
			<< KH[a.mkh].add << ' ' 
			<< MH[a.mmh].tenMH << ' ' 
			<< MH[a.mmh].dvt << ' ' 
			<< MH[a.mmh].giaMua << ' ' 
			<< MH[a.mmh].giaBan  << ' ' 
			<< a.sl << ' ' 
			<< MH[a.mmh].giaBan * a.sl << endl;
        return out;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
