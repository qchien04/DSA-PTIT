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
		multiset<int> a,b;
		multiset<int> res;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			res.insert(x);	
		}
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			res.insert(x);		
		}
		cout<<endl;
		for(set<int>::iterator it = res.begin(); it != res.end(); ++it){
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

