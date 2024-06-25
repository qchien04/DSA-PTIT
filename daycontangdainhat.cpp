#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int ans=0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = 1;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                b[i] = max(b[i], b[j] + 1);
                ans=max(ans,b[i]);
            }   
        }
    }
    cout <<ans << endl;
}


