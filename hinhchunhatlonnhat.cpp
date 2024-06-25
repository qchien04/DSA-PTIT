#include <bits/stdc++.h>
#include <stack>
#include <vector>

using namespace std;

int main() {
        int n,k;
        cin>>k>>n;
        long long a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long res=INT_MIN;
        stack<long long> st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&a[i]<a[st.top()]){
                //cout<<"top "<<st.top()<<endl;
                long long cur_val=a[st.top()];
                st.pop();
                long long width=0;
                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }
                res=max(res,width*cur_val);
                //cout<<"vtri "<<i<<" giatri "<<a[i]<<endl;
                //cout<<"current height "<<cur_val<<" width"<<width<<endl;
                //cout<<"maxArea "<<res<<endl;
            }

            st.push(i);
        }
        while(!st.empty()){
                long long cur_val=a[st.top()];
                st.pop();
                long long width=0;
                if(st.empty()){
                    width=n;
                }
                else{
                    width=n-st.top()-1;
                }
                res=max(res,width*cur_val);
        }
        cout<<res<<endl;

}
