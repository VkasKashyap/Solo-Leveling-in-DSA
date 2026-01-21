#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(vector<int>& nums){
    int n = nums.size()-1;
    for(int i=0;i<n/2;i++){
        swap(nums[i], nums[n-i]);
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    reverseArray(nums);

    for(int num : nums){
        cout<<num<<" ";
    }

    return 0;
}