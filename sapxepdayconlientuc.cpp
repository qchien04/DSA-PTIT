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
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int location1,location2;
		for(int i=0;i<n;i++){
			if(b[i]!=a[i]) {
				location1=i+1;
				break;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(b[i]!=a[i]) {
				location2=i+1;
				break;
			}
		}
		cout<<location1<<" "<<location2;
		cout<<endl;
	}
}

