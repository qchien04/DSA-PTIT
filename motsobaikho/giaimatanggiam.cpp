#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int dem = 1;
        stack<int> st;
        st.push(1);

        for (int i = 0; i < s.size(); i++) {
            dem++;
            if (s[i] == 'I') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
            }
            st.push(dem);
        }

        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }

        cout << endl;
    }

    return 0;
}

