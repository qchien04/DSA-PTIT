#include<bits/stdc++.h>
using namespace std;

class employee{
	private:
		string msnv;
		string ten;
		double hsl,lcb,pc;
	protected:
	public:
		void nhap(){
			cin.ignore();
			getline(cin,msnv);
			getline(cin,ten);
			cin>>hsl>>lcb>>pc;	
		}
		double tongluong(){
			return hsl*lcb+pc;
		}
		double luong=tongluong();
		void in(){
			cout<<msnv<<" "<<ten<<" luong ";
			cout<<tongluong()<<endl;
		}

		string getname(){
			return ten+" xin chao";
		}
		void setname(string s,string sl,double a,double b, double c)	{
			ten=s;
			msnv=sl;
			hsl=a;
			lcb=b;
			pc=c;
		}
};
int main(){
	int n;
	cin>>n;
	employee d[n];
	string s,sl;
	double a,b,c;
	ifstream infile;
	ofstream outfile;
	outfile.open("nhanvien.txt");
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,s);
		getline(cin,sl);
		cin>>a>>b>>c;
		d[i].setname(s,sl,a,b,c);
	}
}






