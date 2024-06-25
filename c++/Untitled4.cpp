#include<bits/stdc++.h>
using namespace std;

class employee{
	private:
		string msnv;
		string ten;
		double hsl,lcb,pc;
	protected:
	public:
		employee(){
			msnv="";
			ten="";
			hsl=0;
			lcb=0;
			pc=0;
			cout<<"ten"<<ten<<"hsl"<<hsl<<endl;
		}
		double tongluong(){
			return hsl*lcb+pc;
		}
		void in(){
			cout<<msnv<<" "<<ten<<" luong ";
			cout<<tongluong()<<endl;
		}
		employee(string s,string sl,double a,double b, double c){
			msnv=s;
			ten=sl;
			hsl=a;
			lcb=b;
			pc=c;
		}
		~employee(){//khoi tao ko dau vao
			msnv="";
			ten="";
			delete s;
			cout<<"ten:"<<ten<<" hsl:"<<hsl<<endl;
		}
};
bool cmp(employee a, employee b) {
    return a.tongluong() < b.tongluong();
}
int main(){
	int n;
	cin>>n;
	employee d[n];
	string s,sl;
	double a,b,c;
	ifstream infile;
	ofstream outfile;
	outfile.open("nhanvien.txt",ios::out|ios::binary);
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,s);
		getline(cin,sl);
		cin>>a>>b>>c;
		d[i].setinfor(s,sl,a,b,c);
	}
	outfile.write(reinterpret_cast<char*>(&d),sizeof(d));
	outfile.close();
	infile.open("nhanvien.txt",ios::in|ios::binary);
	employee y[n];
	infile.read(reinterpret_cast<char*>(&y),sizeof(y));
	infile.close();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(y[i].tongluong()>y[j].tongluong()){
				swap(y[i],y[j]);
			}
		}
	}
	sort(y, y + n, cmp);
	for(int i=0;i<n;i++){
		y[i].in();
	}
	cout<<"luong thap nhat ";
	y[0].in();
	cout<<"luong cao nhat ";	
	y[n-1].in();
	
	return 0;
	
}






