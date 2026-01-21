#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int> nums, int n){
    int x = 0;
    for(int i=0;i<n;i++){
        x ^= nums[i];
    }

    return x;
}

int main(){
    vector<int> nums = {1,1,3,4,5,5,4};
    cout<<singleNumber(nums, nums.size());

    return 0;
}