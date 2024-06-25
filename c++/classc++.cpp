#include<bits/stdc++.h>
using namespace std;

class employee {
	private:
		string msnv;
		string ten;
		double hsl, lcb, pc;
	public:
		void nhap() {
			cin.ignore();
			getline(cin, msnv);
			getline(cin, ten);
			cin >> hsl >> lcb >> pc;	
		}
		double tongluong() {
			return hsl * lcb + pc;
		}
		void in() {
			cout << msnv << " " << ten << " luong ";
			cout << tongluong() << endl;
		}
		string getname(){
			return ten+" xin chao";
		}
		void setname(string n)	{
			ten=n;
		}
};
bool cmp(employee a, employee b) {
    return a.tongluong() < b.tongluong();
}

int main() {
	int n;
	cin >> n;
	employee d[n];
	for (int i = 0; i < n; i++) {
		d[i].nhap();		
	}
	for (int i = 0; i < n; i++) {
		cout << "luong nv ";
		d[i].in();		
	}
	sort(d, d + n, cmp);
	cout << "Danh sach sau khi sap xep:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "luong nv ";
		d[i].in();		
	}

	cout << "luong thap nhat ";
	d[0].in();
	cout << "luong cao nhat ";	
	d[n-1].in();
	//	employee d;
//	d.setname ("hoa");
//	cout<<d.getname();
	
}

