#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isTripletSum(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i=0;i<n-2;i++){
        int s = i+1;
        int e = nums.size()-1;
        while(s<e){
            int sum = nums[i]+nums[s]+nums[e];
            if(sum == target){
                return true;
            }
            else if(sum < target){
                s++;
            }
            else{
                e--;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums1 = {1, 4, 45, 6, 10, 8};
    vector<int> nums2 = {1, 2, 4, 3, 6, 7};
    vector<int> nums3 = {40, 20, 10, 3, 6, 7};


    cout<<isTripletSum(nums1,13);
    cout<<isTripletSum(nums2,10);
    cout<<isTripletSum(nums3,24);
    return 0;

}