#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
//string test1(int a[],int b[],int c[],int n1,int n2,int n3){
//    int check=0;
//    string s="";
//    map<int, int> mp1,mp2,mp3;
//		for(int i=0;i<n1;i++) {
//            mp1[a[i]]++;
//		}
//		for(int i=0;i<n2;i++) {
//            mp2[b[i]]++;
//		}
//		for(int i=0;i<n3;i++) {
//            mp3[c[i]]++;
//		}
//		for(auto x:mp1){
//			long long it=x.first;
//            if(mp1[it]>0&&mp2[it]>0&&mp3[it]>0){
//            	for(int i=0;i<min(mp1[it],min(mp2[it],mp3[it]));i++){
//                    s+=to_string(it);
//                    s+=" ";
//                    check=1;
//            	}
//			}
//		}
//		if(check==0) return "";
//		else return s;
//}
//string test2(int a[],int b[],int c[],int n1,int n2,int n3){
//    int i = 0, j = 0, h = 0;
//    int check=0;
//    string s="";
//		vector<long long> v;
//		while (i < n1 && j < n2 && h < n3)
//		{
//			if (a[i] == b[j] && b[j] == c[h])
//			{
//				v.push_back(a[i]);
//				i++;
//				j++;
//				h++;
//			}
//			else if (a[i] < b[j])
//				i++;
//			else if (b[j] < c[h])
//				j++;
//			else
//				h++;
//		}
//		if (v.size() == 0)
//			return "";
//		else
//		{
//			for(int l=0;l<v.size();l++){
//                s+=to_string(v[l]);
//                s+=" ";
//			}
//			return s;
//		}
//}
int main()
{
	int t;
	cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        int a[n1],b[n2],c[n3];
        vector<int> v;
        for(int i=0;i<n1;i++) {
            cin>>a[i];
        }
        for(int i=0;i<n2;i++) {
            cin>>b[i];
        }
        for(int i=0;i<n3;i++) {
            cin>>c[i];
        }
        int i=0,j=0,k=0;
        while(i<n1&&j<n2&&k<n3){
        	if(a[i]==b[j]&&b[j]==c[k]){
        		v.push_back(a[i]);
        		i++;
        		j++;
        		k++;
			}
			else if(a[i]<b[j]){
				i++;
			}
			else if(b[j]<c[k]){
				j++;
			}
			else k++;	
		}
		if(v.size()==0) cout<<-1;
		else {
			for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
		}
		cout<<endl;

    }

}


