#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMissingNumber(vector<int> nums, int n){
    int totalSum = (n*(n+1))/2;
    int arraySum = 0;
    for(int i=0;i<n-1;i++){
        arraySum += nums[i];
    }
    return totalSum - arraySum;
}

int main(){
    vector<int> nums = {1};
    cout<<findMissingNumber(nums,nums.size()+1);

    return 0;
}