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
        cin>> n;
        int a[n];
        stack<int> st;
    	for(int i=1;i<=n;i++){
    		cin>>a[i];
		}
		st.push(0);
		for(int i=1;i<=n;i++){
			while(st.size()>1&&a[i]>=a[st.top()]){
				st.pop();
			}
			cout<<i-st.top()<<" ";
			st.push(i);
		}
		cout<<endl;
    }
}

