#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int dem=0;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minloc = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minloc]) {
                minloc = j;
            }
        }
        if(minloc!=i) dem++;
        swap(arr[i],arr[minloc]);
//        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//        cout<<endl;
    }
}
int main()
{
	int t;cin>>t;
	while(t--){
    	int n,m;
		cin>>n>>m;
		set<int> a,b;
		set<int> res1,res2;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.insert(x);
			res1.insert(x);	
		}
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			b.insert(x);
			if(a.count(x)!=0) res2.insert(x);
			res1.insert(x);		
		}
		for(set<int>::iterator it = res1.begin(); it != res1.end(); ++it){
			cout<<*it<<" ";
		}
		cout<<endl;
		for(set<int>::iterator it = res2.begin(); it != res2.end(); ++it){
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

