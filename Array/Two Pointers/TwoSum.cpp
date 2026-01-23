#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool twoSum(vector<int>& nums, int target){
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i] + nums[j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums = {1, -2, 1, 0, 5};
    cout<<twoSum(nums, 0);

    return 0;
}