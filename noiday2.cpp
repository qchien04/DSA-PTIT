#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
long long const mod=1e9+7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n;
        long long s = 0;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            q.push(x);
        }
        while (q.size() > 1)
        {
            long long s1 = q.top();
            q.pop();
            long long s2 = q.top();
            q.pop();
            long long k =(s1%mod + s2%mod)%mod;
            s=(s+k%mod)%mod;
            q.push(k);
        }
        cout << s << endl;
    }
}
