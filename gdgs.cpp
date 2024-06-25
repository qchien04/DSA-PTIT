#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+2],dem=0;
        for (int i=0;i<n;i++) {cin>>a[i];dem=max(dem,a[i]);}
        stack<int> max1,min1,max2;

        for (int i=n-1;i>=0;i--)
        {
            while (max1.size()!=0 && max1.top()<=a[i]) max1.pop();
            if (max1.size()==0) min1.push(-1);
            else min1.push(max1.top());
            max1.push(a[i]);
        }
        vector<int>b(n);int j=0;
        while (min1.size()!=0)
        {
            b[j]=min1.top();
            j++;
            min1.pop();
        }
        cout<<"vai"<<endl;
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
        for (int i=n-1;i>=0;i--)
        {
            while (max2.size()!=0 && max2.top()>=a[i]) max2.pop();
            if (max2.size()==0) min1.push(-1);
            else min1.push(max2.top());
            max2.push(a[i]);
        }
        vector<int> c(dem+2);j=0;
        while (min1.size()!=0)
        {
            c[a[j]]=min1.top();
            j++;
            min1.pop();
        }

        for (int i=0;i<n;i++)
            if (b[i]!=-1){
            	if(c[b[i]]==-1) cout<<"-1"<<" ";
            	else cout<<c[b[i]]<<" ";
			}
            else cout<<"-1"<<" ";
        cout<<endl;

    }
}
