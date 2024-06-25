#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int chan=0;
        while (n--)
        {
            int l = chan, r = s.size() - 1, k = r;
            while (l < r && s[l + 1] <= s[l])
                l++;
            if (l == r)
                break;
            while (l < r)
            {
                if (s[r] > s[k]) k = r;
                r--;
            }
            l = chan;
            while (l < k && s[l] >= s[k])
                l++;
            swap(s[l], s[k]);
            chan=l;
        }
        cout << s << endl;
    }
}

