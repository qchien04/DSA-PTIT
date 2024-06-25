#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxCrossingSum(vector<int>& nums, int low, int mid, int high) {
    int leftMax = INT_MIN, rightMax = INT_MIN;

    int sum = 0;
    for (int i = mid; i >= low; --i) {
        sum += nums[i];
        if (sum > leftMax) {
            leftMax = sum;
        }
    }

    sum = 0;
    for (int i = mid + 1; i <= high; ++i) {
        sum += nums[i];
        if (sum > rightMax) {
            rightMax = sum;
        }
    }

    return leftMax + rightMax;
}

int maxSubArraySum(vector<int>& nums, int low, int high) {
    if (low == high) {
        return nums[low];
    }

    int mid = (low + high) / 2;

    int leftMax = maxSubArraySum(nums, low, mid);
    int rightMax = maxSubArraySum(nums, mid + 1, high);
    int crossingMax = maxCrossingSum(nums, low, mid, high);

    return max(max(leftMax, rightMax), crossingMax);
}

int main() {
	int t;
	cin>>t;
	while(t--){
   		int n;
   	 	cin>>n;
   	 	vector<int> nums(n);
  	  for(int i=0;i<n;i++){
    	cin>>nums[i];
	}
    int maxSum = maxSubArraySum(nums, 0, nums.size() - 1);
    cout<< maxSum << endl;		
	}
}


