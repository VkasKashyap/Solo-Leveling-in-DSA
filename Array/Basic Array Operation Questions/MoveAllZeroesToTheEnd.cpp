#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>  moveZeroes(vector<int>& nums, int n){
    vector<int> ans;
    int count = 0;
    for(int i=0;i<n;i++){
        if(nums[i] > 0){
            ans.push_back(nums[i]);
            count++;
        }
    }
    while(count < n){
        ans.push_back(0);
        count++;
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,0,0,4,5,6,0,7,0,8,0,9};
    vector<int> v = moveZeroes(nums, nums.size());

    for(int num : v){
        cout<<num<<" ";
    }

    return 0;
}