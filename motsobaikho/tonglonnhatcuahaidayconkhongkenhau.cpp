#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++) {
			cin >> M[i];;
		}
			long int in = M[0];
			long int ex = 0;
			long int maxs;
			for (int i = 1; i < n; i++)
			{
				maxs = max(in, ex);
				in = ex + M[i];
				ex = maxs;
//				cout<<"in "<<in<<endl;
//				cout<<"ex "<<ex<<endl;
			}
			cout << max(in, ex) << endl;
		
	}
}

