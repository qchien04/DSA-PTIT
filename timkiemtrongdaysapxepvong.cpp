#include <iostream>
using namespace std;

int timx(const int arr[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;

    if (arr[mid] == x) {
        return mid;
    }

    if (arr[low] <= arr[mid]) {
        if (arr[low] <= x && x <= arr[mid]) {
            return timx(arr, low, mid - 1, x);
        } else {
            return timx(arr, mid + 1, high, x);
        }
    }
    if (arr[mid] <= x && x <= arr[high]) {
        return timx(arr, mid + 1, high, x);
    } else {
        return timx(arr, low, mid - 1, x);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x;
	    cin>>n>>x;
	    int arr[n+1];
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
		}
	    int result = timx(arr, 0, n - 1, x)+1;
	    cout<<result<<endl;
	}
    return 0;
}


