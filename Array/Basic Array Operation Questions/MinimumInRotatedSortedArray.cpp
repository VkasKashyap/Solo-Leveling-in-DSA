#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int> nums, int n){
    if(n == 0)  return -1;
    if(nums[0] < nums[n-1])     return nums[0];

    for(int i=1;i<n;i++){
        if(nums[i] < nums[i-1]){
            return nums[i];
        }
    }
    return nums[0];
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << "Minimum is: " << minimum(nums, nums.size()) << endl;
    return 0;
}