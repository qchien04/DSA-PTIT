#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > mt(n, vector<int>(m));
        vector<vector<int> > res(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                cin >> mt[i][j];
                res[i][j] = mt[i][j];
            }
        int dh = 0, ch = n - 1, dc = 0, cc = m- 1;
        while (dh <= ch && dc <= cc) {
            vector<int> a;

            for (int i = dc+1; i <= cc; i++) {
                res[dh][i]=mt[dh][i-1];
            }
            dh++;
            for (int i = dh; i <= ch; i++) {
                res[i][cc]=mt[i-1][cc];
            }
            cc--;
            for (int i = cc; i >= dc; i--) {
             res[ch][i]=mt[ch][i+1];
            }
            ch--;
            for (int i = ch; i >= dh-1; i--) {
               res[i][dc]=mt[i+1][dc];
            }
            dc++;
        }
         for (int i = 0; i < n; i++)
            {
            	for (int j = 0; j < m; j++)    cout<< res[i][j]<<" ";
            	//cout<<endl;
			}
		cout<<endl;
            
    }
    return 0;
}

