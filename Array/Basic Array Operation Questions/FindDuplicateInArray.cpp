#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int duplicate(vector<int> nums, int n){
    sort(nums.begin(), nums.end());
    for(int i = 1; i < n; i++){    
        if(nums[i] == nums[i-1]){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1, 3, 4, 2, 2}; 
    cout << "Duplicate is: " << duplicate(nums, nums.size());

    return 0;
}