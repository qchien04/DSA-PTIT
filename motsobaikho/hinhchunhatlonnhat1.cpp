#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[100][100];
		int dem;
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		int N[100][100] = { 0 };
		for (int j = 0; j < n; j++) {
			dem=0;
			for (int i = 0; i < m; i++)
				if (M[i][j] == 0){
					dem=0;
				}
				else {
					dem++;
					N[i][j]=dem;}
		}
		for (int i = 0; i < m; i++) sort(N[i], N[i] + n);
		int res = 0;
		for (int i = 0; i < m; i++)
			for (int j = n - 1; j >= 0; j--)
				res = max(res, N[i][j] * (n - j));
		cout << res << endl;
	}
}
//		for (int i = 0; i < m; i++)
//			{
//				for (int j = 0; j < n; j++)cout << N[i][j];
//				cout<<endl;
//			}
//		cout<<"sxep"<<endl; 
//1
//3 8
//0 1 0 1 0 0 0 1
//0 1 0 1 1 1 1 0
//1 1 0 1 0 1 1 0 su dung matran phu de dem so lan so 1 xuat hien lien tiep tai moi hang
