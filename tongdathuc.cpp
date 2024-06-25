#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    string s,f;
    getline(cin,s);
    getline(cin,f);
    map<int,int> mp;
    int i=0;
    while(i<s.size()){
        string hso="",mu="";
        int check=0;
        while(isdigit(s[i])){
            hso+=s[i];
            i++;
        }
        i=i+3;
        while(isdigit(s[i])){
            mu+=s[i];
            i++;
            if(s[i]==' '||i==s.size()){
                int m=stoi(mu);
                int hs=stoi(hso);
                mp[m]+=hs;
                break;
            }
        }
        i+=3;
    }
    i=0;
    while(i<f.size()){
        string hso="",mu="";
        while(isdigit(f[i])){
            hso+=f[i];
            i++;
        }
        i=i+3;
        while(isdigit(f[i])){
            mu+=f[i];
            i++;
            if(f[i]==' '||i==f.size()){
                int m=stoi(mu);
                int hs=stoi(hso);
                mp[m]+=hs;
                break;
            }
        }
        i+=3;
    }
    string res;
    for(auto x:mp){
        res=to_string(x.second)+"*x^"+to_string(x.first)+" + "+res;
    }
    res.pop_back();
    res.pop_back();
    cout<<res<<endl;
    mp.clear();
    }
}


