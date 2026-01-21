#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int secondLargest(vector<int> nums, int n){
    if(n < 2)   return -1;
    int largest = INT32_MIN;
    int secondLargest = INT32_MIN;
    for(int i=0;i<n;i++){
        if(nums[i] > largest){
            secondLargest = largest;
            largest = nums[i];
        }
        else if(nums[i] > secondLargest && nums[i] != largest){
            secondLargest = nums[i];
        }
    }
    if(secondLargest == INT32_MIN){
        return -1;
    }

    return secondLargest;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,0,10};

    cout<<"Second largest element in given array is : "<<secondLargest(nums, nums.size());

    return 0;
}