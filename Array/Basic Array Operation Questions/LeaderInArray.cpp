#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> Leader(vector<int> nums, int n){
    vector<int> leader;
    int maxi = nums[n-1];
    leader.push_back(maxi);

    for(int i=n-2;i>=0;i--){
        if(nums[i] > maxi){
            leader.push_back(nums[i]);
            maxi = nums[i];
        }
    }
    reverse(leader.begin(), leader.end());
    return leader;
}

int main(){
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    cout<<"leader in an array are : ";
    vector<int> ans = Leader(nums, nums.size());
    for(int num : ans){
        cout<<num<<" ";
    }
    return 0;
}