#include<bits/stdc++.h>
using namespace std;

class employee {
	private:
		string msnv;
		string ten;
		double hsl, lcb, pc;
	public:
		static double sum;
		void nhap() {
			cin.ignore();
			getline(cin, msnv);
			getline(cin, ten);
			cin >> hsl >> lcb >> pc;	
			sum += tongluong();
		}
		double tongluong() {
			return hsl * lcb + pc;
		}
};
//phuowng thuc tinh cua lop
double employee::sum = 0;

int main() {
	int n;
	cin >> n;
	employee d[n];
	for (int i = 0; i < n; i++) {
		d[i].nhap();		
	}
	cout <<"tong luong "<< employee::sum << endl;
	
	return 0;
}

